// Program to accept string from user and display it in reverse order

#include <stdio.h>

void Reverse(char *str)
{
    int iCnt = 0;
    int iLength = 0;

    while (str[iLength] != '\0')
    {
        iLength++;
    }

    printf("Reverse string :\n");
    for (iCnt = iLength - 1; iCnt >= 0; iCnt--)
    {
        printf("%c", str[iCnt]);
    }
    printf("\n");
}

int main()
{
    char Arr[20];

    printf("Enter the string :\n");
    scanf("%[^\n]s", Arr);

    Reverse(Arr);

    return 0;
}
