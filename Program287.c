#include<stdio.h>
#include<stdlin.h>

typedef struct Node
{
    int data;
    struct node *next;
}NODE, *PNODE, **PPNODE;

void InsertFirst(PPNODE Head, PPNODE Tail, int no)
{
    PNODE newn = NULL;
    newn =(PNODE)malloc(sizeof(NODE));

    newn->data = No;
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

    newn->data = No;
    newn->next = NULL;

    if((*Head == NULL) && (*Tail == NULL))      //LL is empty
    {
        *Head = newn;
        *Tail = newn;
       
    }
    else        //LL contains atleast one node
    {
        (*Tail)->next= newn;
        (*Tail) = (*Tail)->next;  //*Tail = newn;
    }
     (*Tail)->next = *Head;
}
void InsertAtPos(PPNODE Head, PPNODE Tail, int no, int iPos)
{}
void DeleteFirst(PPNODE Head, PPNODE Tail)
{}
void DeleteLast(PPNODE Head, PPNODE Tail)
{}
void DeletetAtPos(PPNODE Head, PPNODE Tail, int iPos)
{}
void Display(PNODE Head, PNODE Tail)
{}
int Count(PNODE Head, PNODE Tail)
{
    return 0;
}

int main()
{
    PNODE First = NULL;
    PNODE LAST = NULL;      //#
    int iRet = 0;



    return 0;
}