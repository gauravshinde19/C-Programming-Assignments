/*
    Program to accept a distance from user in kilometre and convert it into meter
*/

#include <stdio.h>

int KMtoMeter(int iNo)
{
    int iMeter = 0;

    iMeter = iNo * 1000;

    return iMeter;
}

int main()
{
    int iValue = 0;
    int dRet = 0;

    printf("Enter the distance in Kilo Meter :\n");
    scanf("%d", &iValue);

    dRet = KMtoMeter(iValue);
    printf("Distance in meter :\n%d", dRet);

    return 0;
}
