/*
    Write a program which display product of digits of all elements from singly linear linked list. (Don't consider 0)
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

void DisplayProduct(PNODE Head)
{
    int iDigit = 0;
    int iProduct = 1;

    printf("Product of elements :\n");
    while (Head != NULL)
    {
        iProduct = 1;
        while (Head->Data != 0)
        {
            iDigit = Head->Data % 10;
            if (iDigit == 0)
            {
                iDigit = 1;
            }
            iProduct = iProduct * iDigit;
            Head->Data = Head->Data / 10;
        }
        printf("%d\t", iProduct);
        Head = Head->next;
    }
    printf("\n");
}

int main()
{
    PNODE First = NULL;

    InsertFirst(&First, 809);
    InsertFirst(&First, 414);
    InsertFirst(&First, 17);
    InsertFirst(&First, 212);
    InsertFirst(&First, 11);

    DisplayProduct(First);

    return 0;
}
