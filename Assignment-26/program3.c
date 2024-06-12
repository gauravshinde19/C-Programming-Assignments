// Program to accept string from the user and toggle the case of characters

#include <stdio.h>

void strtogglex(char *str)
{
    while (*str != '\0')
    {
        if ((*str >= 'A') && (*str <= 'Z'))
        {
            *str = *str + 32;
        }
        else if ((*str >= 'a') && (*str <= 'z'))
        {
            *str = *str - 32;
        }
        
        str++;
    }
}

int main()
{
    char Arr[20];

    printf("Enter the string :\n");
    scanf("%[^'\n']s", Arr);

    strtogglex(Arr);

    printf("String after toggle the case :\n%s", Arr);

    return 0;
}
