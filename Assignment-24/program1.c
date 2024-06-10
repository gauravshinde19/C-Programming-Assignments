/*
    Program which display ASCII table. Table contains symbol, Decimal, Hexadecimal and octal repreentation of every member from 0 to 255
*/

#include <stdio.h>

void DisplayASCII()
{
    int iCnt = 0;

    printf("Symbol\tDecimal\tHexadecimal\tOctal\n");

    for (iCnt = 0; iCnt <= 255; iCnt++)
    {
        if (iCnt < 32 || iCnt == 127)
        {
            printf("%s\t%d\t%X\t\t%o\n", " ", iCnt, iCnt, iCnt);
        }
        else
        {
            printf("%c\t%d\t%X\t\t%o\n", iCnt, iCnt, iCnt, iCnt);
        }
    }
}

int main()
{
    DisplayASCII();

    return 0;
}
