/*
    Write a program which display all pallindrome elements from singly linear linked list.
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

void DisplayPallindrome(PNODE Head)
{
    int iElement = 0;
    int iTemp = 0;
    int iDigit = 0;

    printf("Pallindrome elements :\n");
    while (Head != NULL)
    {
        iElement = 0;
        iTemp = Head->Data;
        while (Head->Data != 0)
        {
            iDigit = Head->Data % 10;
            iElement = ((iElement * 10) + (iDigit));
            Head->Data = Head->Data / 10;
        }
        if (iElement == iTemp)
        {
            printf("%d\t", iElement);
        }
        Head = Head->next;
    }
    printf("\n");
}

int main()
{
    PNODE First = NULL;

    InsertFirst(&First, 89);
    InsertFirst(&First, 414);
    InsertFirst(&First, 17);
    InsertFirst(&First, 212);
    InsertFirst(&First, 11);

    DisplayPallindrome(First);

    return 0;
}
