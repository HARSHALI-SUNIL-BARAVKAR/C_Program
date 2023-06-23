#include<stdio.h>
#include<stdlib.h>

typedef struct Node
{
    int data;
    struct node *next;
}NODE, *PNODE, **PPNODE;

void InsertFirst(PPNODE Head, PPNODE Tail, int no)
{
    PNODE newn = NULL;
    newn =(PNODE)malloc(sizeof(NODE));

    newn->data = no;
    newn->next = NULL;

    if((*Head == NULL) && (*Tail == NULL))      //LL is empty
    {
        *Head = newn;
        *Tail = newn;
        
    }
    else        //LL contains atleast one node
    {
        newn->next = *Head;
        *Head = newn;
    }
    (*Tail)->next = *Head;
}
void InsertLast(PPNODE Head, PPNODE Tail, int no)
{
        PNODE newn = NULL;
    newn =(PNODE)malloc(sizeof(NODE));

    newn->data = no;
    newn->next = NULL;

    if((*Head == NULL) && (*Tail == NULL))      //LL is empty
    {
        *Head = newn;
        *Tail = newn;
       
    }
    else        //LL contains atleast one node
    {
        (*Tail)->next = newn;
        (*Tail) = (*Tail)->next;  //*Tail = newn;
    }
     (*Tail)->next = *Head;
}

void DeleteFirst(PPNODE Head, PPNODE Tail)
{
    if((*Head) == NULL && (*Tail) == NULL)
    {
        return;
    }
    else if(*Head == *Tail)
    {
        free(*Head);     //*Tail
        *Head = NULL;
        *Tail = NULL;
    }
    else
    {
        *Head = (*Head)->next;
        free((*Tail)->next);
        (*Tail)->next = *Head;
    }
}
void DeleteLast(PPNODE Head, PPNODE Tail)
{
     PNODE temp = *Head;
       
    if((*Head) == NULL && (*Tail) == NULL)
    {
        return;
    }
    else if(*Head == *Tail)
    {
        free(*Head);
        *Head = NULL;
        *Tail = NULL;
    }
    else
    {
        while(temp->next != *Tail)
        {
            temp = temp->next;
        }
        free(*Tail);
        *Tail = temp;
        (*Tail)->next=*Head; 
    }
}
void Display(PNODE Head, PNODE Tail)
{
    if((Head != NULL)&&(Tail != NULL))
    {
        do
        {
            printf("|%d|->",Head->data);
            Head = Head->next;
        }while(Head != Tail->next);
        printf("\n");
    }
    else
    {
        printf("Linked list is empty\n");
    }
}
int Count(PNODE Head, PNODE Tail)
{
    int iCount = 0;
    if((Head != NULL)&&(Tail != NULL))
    {
        do
        {
            iCount++;
            Head = Head->next;
        }while(Head != Tail->next);
        return iCount;
    }
    else
    {
     return 0;
    }
}
void InsertAtPos(PPNODE Head, PPNODE Tail, int no, int iPos)
{
    int iLength = 0;
    PNODE temp=*Head;
    int iCnt = 0;

    PNODE newn = NULL;
    iLength = Count(*Head, *Tail);

    if((iPos<1)|| (iPos>iLength +1))   
    {
        printf("Invalid position\n");
        return;
    }
    if(iPos==1)
    {
        InsertFirst(Head,Tail,no);
    }
    else if(iPos == iLength+1)
    {
        InsertLast(Head,Tail,no);
    }
    else
    {
        for(iCnt = 1; iCnt < iPos-1; iCnt++)
        {
            temp = temp ->next;
        }
        newn =(PNODE)malloc(sizeof(NODE));
        newn->data = no;
        newn->next = NULL;

        newn->next = temp->next;
        temp->next=newn;
    }
}
void DeleteAtPos(PPNODE Head, PPNODE Tail, int iPos)
{
   int iLength = 0;
    PNODE temp=*Head;
    PNODE tempx=NULL;
    int iCnt = 0;
    iLength = Count(*Head, *Tail);

    if((iPos<1)|| (iPos>iLength ))   
    {
        printf("Invalid position\n");
        return;
    }
    if(iPos==1)
    {
        DeleteFirst(Head,Tail);
    }
    else if(iPos == iLength)
    {
        DeleteLast(Head,Tail);
    }
    else
    {
        for(iCnt = 1; iCnt < iPos-1; iCnt++)
        {
            temp = temp ->next;
        }
        tempx = temp->next;
        temp->next = temp->next->next;
        free(tempx);
    } 
}

int main()
{
    PNODE First = NULL;
    PNODE Last = NULL;      //#
    int iRet = 0;

    InsertFirst(&First,&Last,51);
    InsertFirst(&First,&Last,21);
    InsertFirst(&First,&Last,11);

    InsertLast(&First,&Last,101);
    InsertLast(&First,&Last,111);
    InsertLast(&First,&Last,121);

    Display(First,Last);
    iRet = Count(First,Last);
    printf("Number of nodes are: %d\n",iRet);

    InsertAtPos(&First,&Last,55,4);
    Display(First,Last);
    iRet = Count(First,Last);
    printf("Number of nodes are: %d\n",iRet);

    DeleteAtPos(&First,&Last,4);
    Display(First,Last);
    iRet = Count(First,Last);
    printf("Number of nodes are: %d\n",iRet);

    DeleteFirst(&First,&Last);
    DeleteLast(&First,&Last);
    
    Display(First,Last);
    iRet = Count(First,Last);
    printf("Number of nodes are: %d\n",iRet);
    
    return 0;
}