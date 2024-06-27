// Program to accept number and position from user and toggle contents of first and last nibble of the number. Return modified number.

#include <stdio.h>

typedef unsigned int UINT;

UINT ToggleBit(UINT iNo)
{
    int iMask = 0XF000000F;
    UINT iResult = 0;

    iResult = iNo ^ iMask;

    return iResult;
}

int main()
{
    UINT iValue = 0;
    UINT iRet = 0;

    printf("Enter the number :\n");
    scanf("%d", &iValue);

    iRet = ToggleBit(iValue);

    printf("Modified Number : \n%d\n", iRet);

    return 0;
}
