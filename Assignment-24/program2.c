/*
    Program to accept character from user. If character is capital display its corresponding small case character, if character is small case display its corresponding capital character and in other cases display as it is.
*/

#include <stdio.h>

void Display(char ch)
{
    printf("Result :\n");
    if ((ch >= 65) && (ch <= 90))
    {
        printf("%c", ch + 32);
    }
    else if ((ch >= 97) && (ch <= 122))
    {
        printf("%c", ch - 32);
    }
    else
    {
        printf("%c", ch);
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter the character :\n");
    scanf("%c", &cValue);

    Display(cValue);

    return 0;
}
