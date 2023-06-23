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

}
void InsertLast(PPNODE Head, int No)
{

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

}

int Count(PNODE Head)
{
    return 0;
}

int main()
{
    PNODE First = NULL;
    int iRet=0;
    Display(First);
    iRet = Count(First);
    return 0;
}