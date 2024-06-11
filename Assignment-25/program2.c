// Program to accept string from the user and return the count of small characters in it

#include <stdio.h>

int CountSmall(char *str)
{
    int iCnt = 0;

    while (*str != '\0')
    {
        if ((*str >= 'a') && (*str <= 'z'))
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

    iRet = CountSmall(Arr);

    printf("Count of small characters :\n%d", iRet);

    return 0;
}
