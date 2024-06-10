/*
    Program to accept character from user and display its ASCII value in decimal, octal and hexadecimal format
*/

#include <stdio.h>

void Display(char ch)
{
    printf("Decimal : \n%d\n", ch);
    printf("Octal : \n%o\n", ch);
    printf("Hexadecimal : \n%X\n", ch);
}

int main()
{
    char cValue = '\0';

    printf("Enter a character :\n");
    scanf(" %c", &cValue);

    Display(cValue);

    return 0;
}
