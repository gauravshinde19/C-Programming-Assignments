/*
    Write a program to find the second maximum element from singly linear linked list.
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

int SecMaximum(PNODE Head)
{
    int iMax = 0;
    int iSecMax = 0;

    while (Head != NULL)
    {
        if ((Head->Data) > iMax)
        {
            iSecMax = iMax;
            iMax = Head->Data;
        }
        if ((Head->Data < iMax) && (Head->Data > iSecMax))
        {
            iSecMax = Head->Data;
        }
        Head = Head->next;
    }
    return iSecMax;
}

int main()
{
    PNODE First = NULL;
    int iRet = 0;

    InsertFirst(&First, 131);
    InsertFirst(&First, 51);
    InsertFirst(&First, 121);
    InsertFirst(&First, 101);
    InsertFirst(&First, 21);
    InsertFirst(&First, 11);

    iRet = SecMaximum(First);

    printf("Second maximum element from LinkedList : \n%d\n", iRet);

    return 0;
}
