/*
    Write a program which search first occurrence of particular element from singly linear linked list.
    Function should return position at which element is found.
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

int SearchFirstOcc(PNODE Head, int iNo)
{
    PNODE Temp = Head;
    int iCnt = 1;

    while (Temp != NULL)
    {
        if ((Temp->Data) == iNo)
        {
            break;
        }
        iCnt++;
        Temp = Temp->next;
    }
    if (Temp == NULL)
    {
        return -1;
    }
    else
    {
        return iCnt;
    }
}

int main()
{
    PNODE First = NULL;
    int iRet = 0;
    int iNo = 0;

    InsertFirst(&First, 101);
    InsertFirst(&First, 51);
    InsertFirst(&First, 21);
    InsertFirst(&First, 11);

    printf("Enter a number that you want to search\n");
    scanf("%d", &iNo);

    iRet = SearchFirstOcc(First, iNo);

    if (iRet == -1)
    {
        printf("No such element present in Linked List\n");
    }
    else
    {
        printf("Element found at position : \n%d\n", iRet);
    }

    return 0;
}
