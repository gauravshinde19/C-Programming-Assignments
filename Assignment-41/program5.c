/*
    Write a program which find the smallest element from singly linear linked list.
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

int Minimum(PNODE Head)
{
    int iMin = Head->Data;

    while (Head != NULL)
    {
        if (Head->Data < iMin)
        {
            iMin = Head->Data;
        }
        Head = Head->next;
    }

    return iMin;
}

int main()
{
    PNODE First = NULL;
    int iRet = 0;

    InsertFirst(&First, 101);
    InsertFirst(&First, 51);
    InsertFirst(&First, 5);
    InsertFirst(&First, 21);
    InsertFirst(&First, 11);

    iRet = Minimum(First);

    printf("Smallest element from LinkedList : \n%d\n", iRet);

    return 0;
}
