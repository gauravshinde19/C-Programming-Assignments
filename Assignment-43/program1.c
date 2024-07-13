/*
    Write a program which display every element in reverse order from singly linear linked list.
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

void Reverse(PNODE Head)
{
    int iDigit = 0;
    int iElement = 0;

    printf("Elements in reverse order :\n");
    while (Head != NULL)
    {
        iElement = 0;
        while (Head->Data != 0)
        {
            iDigit = Head->Data % 10;
            iElement = ((iElement * 10) + (iDigit));
            Head->Data = Head->Data / 10;
        }
        Head->Data = iElement;
        printf("| %d |->", Head->Data);
        Head = Head->next;
    }
    printf("| NULL |\n");
}

int main()
{
    PNODE First = NULL;

    InsertFirst(&First, 89);
    InsertFirst(&First, 41);
    InsertFirst(&First, 17);
    InsertFirst(&First, 21);
    InsertFirst(&First, 11);

    Reverse(First);

    return 0;
}
