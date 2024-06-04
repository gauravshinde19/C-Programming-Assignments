// Program to accept number from user and return the count of digits between 3 and 7 in that number

#include <stdio.h>

int CountRange(int iNo)
{
    int iDigit = 0;
    int iCount = 0;

    while (iNo != 0)
    {
        iDigit = iNo % 10;
        if ((iDigit > 3) && (iDigit < 7))
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

    iRet = CountRange(iValue);

    printf("Frequency of digits between 3 & 7 in %d :\n%d", iValue, iRet);

    return 0;
}
