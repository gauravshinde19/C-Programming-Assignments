// Program to accept string from the user and convert it into lowercase

#include <stdio.h>

void strlwrx(char *str)
{
    while (*str != '\0')
    {
        if ((*str >= 'A') && (*str <= 'Z'))
        {
            *str = *str + 32;
        }
        str++;
    }
}

int main()
{
    char Arr[20];

    printf("Enter the string :\n");
    scanf("%[^'\n']s", Arr);

    strlwrx(Arr);

    printf("String in lowercase :\n%s", Arr);

    return 0;
}
