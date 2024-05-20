/*
    Program to accept a radius from user and calculate the area of the circle
*/

#include <stdio.h>

double CircleArea(float fRadius)
{
    const float PI = 3.14;
    double dArea = 0.0;

    dArea = PI * fRadius * fRadius;

    return dArea;
}

int main()
{
    float fValue = 0.0f;
    double dRet = 0.0;

    printf("Enter the radius of the circle :\n");
    scanf("%f", &fValue);

    dRet = CircleArea(fValue);

    printf("Area of the Circle :\n%f", dRet);

    return 0;
}
