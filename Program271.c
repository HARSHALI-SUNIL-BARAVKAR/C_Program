#include<stdio.h>
#include<stdlib.h>

typedef struct Node
{
    int data;
    struct Node *next;
    struct Node *prev;          //#
}NODE, *PNODE, **PPNODE;
//1. Allocate memory for new node
//2. Initialised new node
//3. Check linked list empty or not
//4.if not empty then right logic accoring linked list
//5.

void InsertFirst(PPNODE Head, int No)
{
    PNODE newn = NULL;

    newn =(PNODE)malloc(sizeof(NODE));

    newn->data = No;
    newn->next = NULL;
    newn->prev = NULL;          //#

    if(*Head == NULL)        //LL is empty
    {
        *Head = newn;
    }
    else                     //LL contains atleast one node in it   
    {
        (*Head)->prev = newn;
        newn->next = *Head;
        *Head= newn;
    }
}
void InsertLast(PPNODE Head, int No)
{
    PNODE newn = NULL;
    PNODE temp = *Head;

    newn =(PNODE)malloc(sizeof(NODE));

    newn->data = No;
    newn->next = NULL;
    newn->prev = NULL;          //#

    if(*Head == NULL)        //LL is empty
    {
        *Head = newn;
        newn->prev =temp;
    }
    else                     //LL contains atleast one node in it   
    {
        while(temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newn;
        newn->prev = temp;
    }   

}
void InsertAtPos(PPNODE Head, int Pos)
{

}
void DeleteFirst(PPNODE Head)
{

}
void DeleteLast(PPNODE Head)
{

}void DeleteAtPos(PPNODE Head, int Pos)
{

}
void Display(PNODE Head)
{
    printf("Elements of linked list are:\n");

    printf("NULL <=>");
    while(Head != NULL)
    {
        printf("|%d|<=>",Head->data);
        Head->prev= Head->next;
    }
    printf("NULL\n");

}

int Count(PNODE Head)
{
    int iCount = 0;
       while(Head != NULL)
    {
        iCount++;
         Head->prev= Head->next;
    }
    return iCount;
}

int main()
{
    PNODE First = NULL;
    int iRet=0;

    InsertFirst(&First,101);
    InsertFirst(&First,51);
    InsertFirst(&First,21);
    InsertFirst(&First,11);
   
    iRet = Count(First);
    printf("Number of elements are: %d\n",iRet);

    Display(First);
   
    InsertLast(&First,111);
    InsertLast(&First,121);
   
   iRet = Count(First);
    printf("Number of elements are: %d\n",iRet);

    Display(First);
   
    return 0;
}