//Insert First 
#include<stdio.h>
#include<stdlib.h>

struct Node 
{
    int data;
    struct Node * next;
};

typedef struct Node NODE;
typedef struct Node * PNODE;
typedef struct Node ** PPNODE;

void Display(PNODE Head)
{}

int Count(PNODE Head)
{
    return 0;
}


void InsertFirst(PPNODE Head , int No)
{
    PNODE newn = NULL;
    //Allocate memory for node
    newn = (PNODE) malloc(sizeof(NODE));

    //Initialise the node
    newn->data = No;
    newn->next = NULL;

    if(*Head == NULL)  //Linked list is empty
    {
        *Head = newn;
    }
    else               //Linked list contains atleast one node
    {
        newn->next = *Head;
        *Head = newn;
    }
}

void InsertLast(PPNODE Head , int No)
{
    PNODE newn = NULL;
    //Allocate memory for node
    newn = (PNODE) malloc(sizeof(NODE));

    //Initialise the node
    newn->data = No;
    newn->next = NULL;

    if(*Head == NULL)  //Linked list is empty
    {
        *Head = newn;
    }
    else               //Linked list contains atleast one node
    {
        
    }
}

int main()
{
    PNODE First = NULL;

    InsertFirst(&First,51); //InsertFirst(60,51)
    InsertFirst(&First,21); //InsertFirst(60,21)
    InsertFirst(&First,11); //InsertFirst(60,11)

    return 0;
}