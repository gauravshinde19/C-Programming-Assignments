/*
    Program to accept a area in square feet and convert it into square meter
*/

#include <stdio.h>

double SquareMeter(int iNo)
{
    double dSqM = 0.0;

    dSqM = iNo * 0.0929;

    return dSqM;
}

int main()
{
    int iValue = 0;
    double dRet = 0;

    printf("Enter the area in square feet :\n");
    scanf("%d", &iValue);

    dRet = SquareMeter(iValue);

    printf("Area in square meter :\n%f", dRet);

    return 0;
}
