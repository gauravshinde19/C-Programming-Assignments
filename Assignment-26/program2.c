// Program to accept string from the user and convert it into uppercase

#include <stdio.h>

void struprx(char *str)
{
    while (*str != '\0')
    {
        if ((*str >= 'a') && (*str <= 'z'))
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

    struprx(Arr);

    printf("String in uppercase :\n%s", Arr);

    return 0;
}
