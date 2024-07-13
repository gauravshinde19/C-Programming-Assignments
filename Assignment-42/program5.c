/*
    Write a program which display addition of digits of all elements from singly linear linked list.
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

void SumDigit(PNODE Head)
{
    int iNum = 0;
    int iSum = 0;

    printf("Sum of digits :\n");
    while (Head != NULL)
    {
        iSum = 0;
        while (Head->Data != 0)
        {
            iNum = Head->Data % 10;
            iSum = iSum + iNum;
            Head->Data = Head->Data / 10;
        }
        printf("%d\t", iSum);
        Head = Head->next;
    }
    printf("\n");
}

int main()
{
    PNODE First = NULL;

    InsertFirst(&First, 89);
    InsertFirst(&First, 41);
    InsertFirst(&First, 17);
    InsertFirst(&First, 21);
    InsertFirst(&First, 11);

    SumDigit(First);

    return 0;
}
