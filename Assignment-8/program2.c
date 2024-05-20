/*
    Program to accept a width and height from user and calculate the area of the rectangle
*/

#include <stdio.h>

double RectArea(float fWidth, float fHeight)
{
    double dArea = 0.0;

    dArea = fHeight * fWidth;

    return dArea;
}

int main()
{
    float fValue1 = 0.0f;
    float fValue2 = 0.0f;
    double dRet = 0.0;

    printf("Enter the width of the rectangle :\n");
    scanf("%f", &fValue1);

    printf("Enter the height of the rectangle :\n");
    scanf("%f", &fValue2);

    dRet = RectArea(fValue1, fValue2);

    printf("Area of the Rectangle :\n%f", dRet);

    return 0;
}
