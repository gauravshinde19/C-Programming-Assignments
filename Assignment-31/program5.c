/*
    Program to accept a string from user and replace each occurrence of first character into capital
*/

#include <stdio.h>

void StrCap(char *str)
{
    if (str == NULL || str[0] == '\0')
    {
        return; 
    }

    char first_char = str[0];
    char first_char_cap;

    if ((first_char >= 'a') && (first_char <= 'z'))
    {
        first_char_cap = first_char - 32;
    }
    else
    {
        first_char_cap = first_char; 
    }

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == first_char)
        {
            str[i] = first_char_cap;
        }
    }
}

int main()
{
    char arr[50];

    printf("Enter a string :\n");
    scanf("%[^\n]s", arr);

    StrCap(arr);

    printf("Copied string :\n%s\n", arr);

    return 0;
}
