/*
    Write a program which display all prime elements from singly linear linked list.
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

void DisplayPrime(PNODE Head)
{
    int i = 0;
    int iCnt = 0;

    printf("Prime elements from LinkedList :\n");
    while (Head != NULL)
    {
        for (i = 2; i < Head->Data; i++)
        {
            if ((Head->Data % i) == 0)
            {
                iCnt++;
                break;
            }
        }

        if (iCnt != 1)
        {
            printf("%d\n", Head->Data);
        }

        iCnt = 0;
        Head = Head->next;
    }
}

int main()
{
    PNODE First = NULL;

    InsertFirst(&First, 6);
    InsertFirst(&First, 89);
    InsertFirst(&First, 41);
    InsertFirst(&First, 17);
    InsertFirst(&First, 21);
    InsertFirst(&First, 11);

    DisplayPrime(First);

    return 0;
}
