#include<stdio.h>
#include<stdlib.h>

typedef struct Node
{
    int data;
    struct Node *next;
}NODE,*PNODE,**PPNODE;

//1:Allocate memory for new node
//2:Initialise the node
//3:Check whether  LL is empty or not
//4:If LL is empty store address of newnode in First
//5:Otherwise store the address of newnode inside next pointer of old first node
//6:Update First pointer with the address of new node

void InsertFirst(PPNODE Head, int no)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));   //1

    newn->data = no;        //2    
    newn->next = NULL;

    if(*Head == NULL)    //3
    {
        *Head = newn;    //4
    }
    else
    {
        newn->next = *Head;   //5
        *Head = newn;         //6
    }
}

void InsertLast(PPNODE Head, int no)
{
    PNODE newn = NULL;
    PNODE temp = *Head;
    newn = (PNODE)malloc(sizeof(NODE));   //1

    newn->data = no;        //2    
    newn->next = NULL;

    if(*Head == NULL)    //3
    {
        *Head = newn;    //4
    }
    else
    {
        while(temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newn;
    }
}

void Display(PNODE Head)
{
    printf("Elements of LinkedList are: \n");

    while(Head != NULL)
    {
        printf("|%d|->",Head->data);
        Head = Head -> next;
    }
    printf("NULL \n");
}

int Count(PNODE Head)
{
    int iCount = 0;
    while(Head != NULL)
    {
        iCount++;
        Head = Head -> next;
    }
    return iCount;
}

void DeleteFirst(PPNODE Head)
{
    PNODE temp = *Head;
    if(*Head == NULL)      //LL is empty
    {
        return;
    }
    else if((*Head) -> next == NULL) // LL contains one node
    {
        free(*Head);
        *Head = NULL;
    }
    else         //LL contains more than one node
    {
        *Head = (*Head)-> next;
        free(temp);
    }
}

void DeleteLast(PPNODE Head)
{
    PNODE temp = *Head;
    if(*Head == NULL)      //LL is empty
    {
        return;
    }
    else if((*Head) -> next == NULL) // LL contains one node
    {
        free(*Head);
        *Head = NULL;
    }
    else         //LL contains more than one node
    {
        while(temp->next->next != NULL)  //Type 3rd while loop from notebk
        {
            temp= temp->next;
        }
        free(temp->next);
        temp->next = NULL;
    }
}

void InsertAtPos(PPNODE Head, int no, int iPos)
{
    int iLength = 0;
    PNODE newn = NULL;
    
    iLength= Count(*Head); // calculate length of linkedlist
    int iCnt = 0;
    PNODE temp = *Head;

    //Filter
    if((iPos < 1)||(iPos > iLength+1))  //Invalid Position
    {
        printf("Invalid Position\n");
        return;
    }
    if(iPos==1)
    {
        InsertFirst(Head,no);   
    }
    else if(iPos== iLength+1)
    {
        InsertLast(Head,no);
    }
    else
    {
        newn = (PNODE)malloc(sizeof(NODE));  

        newn->data = no;          
        newn->next = NULL;
        for(iCnt =1; iCnt<iPos-1; iCnt++)
        {
            temp = temp->next;
        }

         //Sequence is important   
            newn->next= temp->next;
            temp->next = newn;        
    }  
}

void DeleteAtPos(PPNODE Head, int iPos)
{
    int iLength = 0;
    iLength= Count(*Head); // calculate length of linkedlist
    int iCnt = 0;
    PNODE temp = *Head;
    PNODE tempX = NULL;

    PNODE newn = NULL;
    //Filter
    if((iPos < 1)||(iPos > iLength))  //Invalid Position
    {
        printf("Invalid Position\n");
        return;
    }
    if(iPos==1)
    {
        DeleteFirst(Head);   
    }
    else if(iPos == iLength)
    {
        DeleteLast(Head);
    }
    else
    {
        for(iCnt =1; iCnt<iPos-1; iCnt++)
        {
            temp = temp->next;
        }
        tempX = temp->next;
        //Sequence is important
        temp->next = temp->next->next;
        free(tempX);
    }
    
}

int main()
{
    PNODE First = NULL;
    int iRet = 0;

    InsertLast(&First,11);
    InsertLast(&First,21);
    InsertLast(&First,51);
    InsertLast(&First,101);
    
    Display(First);

    iRet = Count(First);
    printf("Number of nodes are %d ",iRet);

    InsertFirst(&First,10);
    InsertFirst(&First,20);

    InsertAtPos(&First,25,5);

    Display(First);
    
    iRet = Count(First);
    printf("Number of nodes are %d ",iRet);

    DeleteAtPos(&First,5);

    Display(First);
    
    iRet = Count(First);
    printf("Number of nodes are %d ",iRet);

    DeleteFirst(&First);
    DeleteFirst(&First);
    
    Display(First);
    
    iRet = Count(First);
    printf("Number of nodes are %d ",iRet);

    DeleteLast(&First);
    
    Display(First);
    
    iRet = Count(First);
    printf("Number of nodes are %d ",iRet);

    return 0;
}