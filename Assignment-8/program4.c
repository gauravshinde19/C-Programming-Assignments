/*
    Program to accept a temprature from user in fahrenheit and convert it into celsius
*/

#include <stdio.h>

double FhtoCs(float fTemp)
{
    double fCelsius = 0.0;

    fCelsius = ((fTemp - 32) * (5.0 / 9));

    return fCelsius;
}

int main()
{
    float fValue = 0.0f;
    double dRet = 0.0;

    printf("Enter the temprature in Fahrenheit :\n");
    scanf("%f", &fValue);

    dRet = FhtoCs(fValue);

    printf("Temprature in Celsius :\n%f", dRet);

    return 0;
}
