/*
    Write a program which display smallest digit of all elements from singly linear linked list.
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

void DisplaySmall(PNODE Head)
{
    int iDigit = 0;
    int iMin = 0;

    printf("Smallest digit from elements :\n");
    while (Head != NULL)
    {
        iDigit = Head->Data % 10;
        iMin = iDigit;
        while (Head->Data != 0)
        {
            iDigit = Head->Data % 10;
            if (iDigit < iMin)
            {
                iMin = iDigit;
            }
            Head->Data = Head->Data / 10;
        }
        printf("%d\t", iMin);
        Head = Head->next;
    }
    printf("\n");
}

int main()
{
    PNODE First = NULL;

    InsertFirst(&First, 809);
    InsertFirst(&First, 414);
    InsertFirst(&First, 78);
    InsertFirst(&First, 212);
    InsertFirst(&First, 11);

    DisplaySmall(First);

    return 0;
}
