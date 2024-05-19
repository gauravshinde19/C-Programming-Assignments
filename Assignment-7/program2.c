/*
    Program to accept amount from user in US dollar and convert that amount in indian currency (1$ as 70 rupees)
    Input - 10
    Output - 700
*/

#include <stdio.h>

int DollarToINR(int iNo)
{
    int iDollar = 0;
    iDollar = iNo * 70;

    return iDollar;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the amount in US dollar :\n");
    scanf("%d", &iValue);

    iRet = DollarToINR(iValue);

    printf("Value in INR :\n%d", iRet);
}
