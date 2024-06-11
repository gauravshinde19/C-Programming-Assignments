// Program to accept string from the user and return the diffrence between frequency of capital characters and small characters

#include <stdio.h>

int Difference(char *str)
{
    int iCntC = 0;
    int iCntS = 0;
    int iDif = 0;

    while (*str != '\0')
    {
        if ((*str >= 'A') && (*str <= 'Z'))
        {
            iCntC++;
        }
        else if ((*str >= 'a') && (*str <= 'z'))
        {
            iCntS++;
        }

        str++;
    }

    iDif = iCntS - iCntC;

    return iDif;
}

int main()
{
    char Arr[20];
    int iRet = 0;

    printf("Enter the string :\n");
    scanf("%[^'\n']s", Arr);

    iRet = Difference(Arr);

    printf("Difference between frequency of capital characters and small characters :\n%d", iRet);

    return 0;
}
