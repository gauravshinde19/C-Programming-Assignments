/*
    write a program which accepts number from user and display its factors in decreasing order
    Input - 10
    output - 5    2    1
*/

#include <stdio.h>

// Time Complexity : N/2
void FactRev(int iNo)
{
    int iCnt = 0;

    printf("Factors of %d in reverse order :\n", iNo);
    for (iCnt = (iNo/2); iCnt >= 1; iCnt--)
    {
        if((iNo % iCnt) == 0)
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

    FactRev(iValue);

    return 0;
}
