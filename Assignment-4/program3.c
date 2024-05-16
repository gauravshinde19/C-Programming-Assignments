// Write a program which accepts number from user and display all its non factors

#include <stdio.h>

// Time Complexity : O(N)
void NonFact(int iNo)
{
    int iCnt = 0;

    printf("Non-factors of %d :\n", iNo);
    for (iCnt = 1; iCnt < iNo; iCnt++)
    {
        if((iNo % iCnt) != 0)
        {
            printf("%d\n", iCnt);
        }
    }
}

int main()
{   
    int iValue = 0;

    printf("Enter the number : ");
    scanf("%d", &iValue);

    NonFact(iValue);

    return 0;
}
