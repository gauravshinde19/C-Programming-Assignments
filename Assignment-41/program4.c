/*
    Write a program which find the largest element from singly linear linked list.
*/

#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int Data;
    struct Node *next;
};

typedef struct Node NODE;
typedef struct Node *PNODE;
typedef struct Node **PPNODE;

void InsertFirst(PPNODE Head, int No)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));
    newn->Data = No;
    newn->next = NULL;

    if (*Head == NULL)
    {
        *Head = newn;
    }
    else
    {
        newn->next = *Head;
        *Head = newn;
    }
}

int Maximum(PNODE Head)
{
    int iMax = Head->Data;

    while (Head != NULL)
    {
        if (Head->Data > iMax)
        {
            iMax = Head->Data;
        }
        Head = Head->next;
    }

    return iMax;
}

int main()
{
    PNODE First = NULL;
    int iRet = 0;

    InsertFirst(&First, 101);
    InsertFirst(&First, 51);
    InsertFirst(&First, 21);
    InsertFirst(&First, 121);
    InsertFirst(&First, 11);

    iRet = Maximum(First);

    printf("Largest element from LinkedList : \n%d\n", iRet);

    return 0;
}
