// program to accept number from user and return the multiplication of all digits of that number

#include <stdio.h>

int MultDigits(int iNo)
{
    int iDigit = 0;
    int iMult = 1;

    while (iNo != 0)
    {
        iDigit = iNo % 10;
        iMult = iMult * iDigit;
        iNo = iNo / 10;
    }

    return iMult;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number :\n");
    scanf("%d", &iValue);

    iRet = MultDigits(iValue);

    printf("Multiplication of digits in %d :\n%d", iValue, iRet);

    return 0;
}
