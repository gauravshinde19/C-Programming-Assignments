// Program to accept number and position from user and OFF the bit of that position

#include <stdio.h>

typedef unsigned int UINT;

UINT OffBit(UINT iValue, int Pos)
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
        iResult = iValue ^ iMask;
        return iResult;
    }
    else
    {
        return iValue;
    }
}

int main()
{
    UINT iValue = 0;
    int iPos = 0;
    int iRet = 0;

    printf("Enter a number :\n");
    scanf("%d", &iValue);

    printf("Enter the position :\n");
    scanf("%d", &iPos);

    iRet = OffBit(iValue, iPos);

    printf("Modified number : \n%d\n", iRet);

    return 0;
}
