/*
    Write a program which display all perfect elements from singly linear linked list.
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

void DisplayPerfect(PNODE Head)
{
    int i = 0;
    int iSum = 0;

    printf("Perfect elements from LinkedList :\n");
    while (Head != NULL)
    {
        for (i = 1; i < Head->Data; i++)
        {
            if ((Head->Data % i) == 0)
            {
                iSum = iSum + i;
            }
            if (iSum > Head->Data)
            {
                break;
            }
        }

        if (iSum == Head->Data)
        {
            printf("%d\n", Head->Data);
        }

        iSum = 0;
        Head = Head->next;
    }
}

int main()
{
    PNODE First = NULL;

    InsertFirst(&First, 101);
    InsertFirst(&First, 6);
    InsertFirst(&First, 28);
    InsertFirst(&First, 22);
    InsertFirst(&First, 21);
    InsertFirst(&First, 11);

    DisplayPerfect(First);

    return 0;
}
