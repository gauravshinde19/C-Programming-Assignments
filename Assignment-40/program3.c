// Program to accept number and position from user and ON the bit of that position

#include <stdio.h>

typedef unsigned int UINT;

UINT OnBit(UINT iValue, int Pos)
{
    int iMask = 0X00000001;
    UINT iResult = 0;

    if ((Pos < 1) || (Pos > 32))
    {
        return -1;
    }

    iMask = iMask << (Pos - 1);

    iResult = iValue & iMask;

    if (iResult == iMask)
    {
        return iValue;
    }
    else
    {
        iResult = iValue ^ iMask;
        return iResult;
    }
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

    iRet = OnBit(iValue, iPos);

    printf("Modified number : \n%d\n", iRet);

    return 0;
}
