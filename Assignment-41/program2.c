/*
    Write a program which search last occurrence of particular element from singly linear linked list.
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

int SearchLastOcc(PNODE Head, int iNo)
{
    int iCnt = 1;
    int iPos = 0;
    PNODE Temp = Head;

    while (Temp != NULL)
    {
        if (Temp->Data == iNo)
        {
            iPos = iCnt;
        }
        Temp = Temp->next;
        iCnt++;
    }
    if (iPos == 0)
    {
        return -1;
    }
    else
    {
        return iPos;
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
    InsertFirst(&First, 21);
    InsertFirst(&First, 51);

    printf("Enter a number that you want to search\n");
    scanf("%d", &iNo);

    iRet = SearchLastOcc(First, iNo);

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
