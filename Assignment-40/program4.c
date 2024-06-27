// Program to accept number and position from user and toggle the bit of that position

#include <stdio.h>

typedef unsigned int UINT;

UINT ToggleBit(UINT iNo, int Pos)
{
    int iMask = 0X00000001;
    UINT iResult = 0;

    if ((Pos < 1) || (Pos > 32))
    {
        return -1;
    }

    iMask = iMask << (Pos - 1);

    iResult = iNo ^ iMask;

    return iResult;
}

int main()
{
    UINT iValue = 0;
    int iPos = 0;
    int iRet = 0;

    printf("Enter the number :\n");
    scanf("%d", &iValue);

    printf("Enter the position :\n");
    scanf("%d", &iPos);

    iRet = ToggleBit(iValue, iPos);

    if (iRet < 0)
    {
        printf("Invalid Input\n");
    }
    else
    {
        printf("Modified Number : \n%d\n", iRet);
    }

    return 0;
}
