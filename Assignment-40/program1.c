// Program to accept number and position from user and check whether bit at that position is ON or OFF

#include <stdio.h>
#include <stdbool.h>

#define ON 1
#define OFF 0
#define ERROR -1
typedef unsigned int UINT;

bool ChkBit(UINT iNo, int Pos)
{
    int iMask = 0X00000001;
    int iResult = 0;

    if ((Pos < 1) || (Pos > 32))
    {
        return ERROR;
    }

    iMask = iMask << (Pos - 1);

    iResult = iNo & iMask;

    if (iResult == iMask)
    {
        return ON;
    }
    else
    {
        return OFF;
    }
}

int main()
{
    UINT iValue = 0;
    int iPos = 0;
    bool bRet = OFF;

    printf("Enter the number :\n");
    scanf("%d", &iValue);

    printf("Enter the position :\n");
    scanf("%d", &iPos);

    bRet = ChkBit(iValue, iPos);

    if (bRet == ON)
    {
        printf("Bit number %d is ON\n", iPos);
    }
    else if (bRet == ERROR)
    {
        printf("Invalid Input\n");
    }
    else
    {
        printf("Bit number %d is OFF\n", iPos);
    }

    return 0;
}
