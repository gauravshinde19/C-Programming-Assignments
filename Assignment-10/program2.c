// Program to accept number from user and check whether it contains 0 in it or not

#include <stdio.h>
#include <stdbool.h>

bool ChkZero(int iNo)
{
    int iDigit = 0;

    while (iNo != 0)
    {
        iDigit = iNo % 10;
        if (iDigit == 0)
        {
            return true;
            break;
        }
        iNo = iNo / 10;
    }
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter the number :\n");
    scanf("%d", &iValue);

    bRet = ChkZero(iValue);

    if (bRet == true)
    {
        printf("It contains zero");
    }
    else
    {
        printf("There is no zero");
    }

    return 0;
}
