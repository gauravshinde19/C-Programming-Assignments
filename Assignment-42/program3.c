/*
    Write a program to find addition of all even elements from singly linear linked list.
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

int AdditionEven(PNODE Head)
{
    int iSum = 0;

    while (Head != NULL)
    {
        if ((Head->Data % 2) == 0)
        {
            iSum = iSum + Head->Data;
        }

        Head = Head->next;
    }

    return iSum;
}

int main()
{
    PNODE First = NULL;
    int iRet = 0;

    InsertFirst(&First, 101);
    InsertFirst(&First, 51);
    InsertFirst(&First, 21);
    InsertFirst(&First, 48);
    InsertFirst(&First, 52);
    InsertFirst(&First, 11);

    iRet = AdditionEven(First);

    printf("Addition of all even elements from LinkedList : \n%d\n", iRet);

    return 0;
}
