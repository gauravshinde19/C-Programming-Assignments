// Program to accept string from the user and return the count of the whitespaces from that string

#include <stdio.h>

int CountWhite(char *str)
{
    int iCnt = 0;

    while (*str != '\0')
    {
        if (*str == ' ')
        {
            iCnt++;
        }
        str++;
    }

    return iCnt;
}

int main()
{
    char Arr[20];
    int iRet = 0;

    printf("Enter the string :\n");
    scanf("%[^'\n']s", Arr);

    iRet = CountWhite(Arr);

    printf("Count of whitespaces :\n%d", iRet);

    return 0;
}
