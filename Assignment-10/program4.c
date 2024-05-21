// Program to accept number from user and count frequency of 4 in it

#include <stdio.h>

int CountFour(int iNo)
{
    int iDigit = 0;
    int iCount = 0;

    while (iNo != 0)
    {
        iDigit = iNo % 10;
        if (iDigit == 4)
        {
            iCount++;
        }
        iNo = iNo / 10;
    }

    return iCount;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number :\n");
    scanf("%d", &iValue);

    iRet = CountFour(iValue);

    printf("Frequency of 4 in %d :\n%d", iValue, iRet);

    return 0;
}
