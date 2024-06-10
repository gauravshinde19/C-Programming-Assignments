/*
    Program to accept character from user. If character is capital then display all the characters from the input characters till Z. If character is small case then display all the characters in reverse order till a. In other cases return directly.
*/

#include <stdio.h>

void Display(char ch)
{
    int i = 0;

    printf("Result :\n");
    if ((ch >= 65) && (ch <= 90))
    {
        for (i = ch; i <= 90; i++, ch++)
        {
            printf("%c\t", ch);
        }
    }
    else if ((ch >= 97) && (ch <= 122))
    {
        for (i = ch; i >= 97; i--, ch--)
        {
            printf("%c\t", ch);
        }
    }
    else
    {
        return;
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
