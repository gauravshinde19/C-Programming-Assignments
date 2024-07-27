// Program to accept file name and one character from user and count number of that character from that file

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>

int main()
{
    char FileName[30];
    char Buffer[100] = {'\0'};
    char ch = '\0';
    int fd = 0;
    int iRet = 0;
    int iCount = 0;
    int i = 0;

    printf("Enter the name of file that you want to open :\n");
    scanf("%s", FileName);

    fd = open(FileName, O_RDWR);

    if (fd == -1)
    {
        printf("Unable to open file\n");
        return 0;
    }

    printf("Enter the character that you want to count :\n");
    scanf(" %c", &ch);

    while ((iRet = read(fd, Buffer, sizeof(Buffer))) != 0)
    {
        for (i = 0; i < iRet; i++)
        {
            if (Buffer[i] == ch)
            {
                iCount++;
            }
        }
    }

    printf("Number of character '%c' : %d\n", ch, iCount);

    close(fd);

    return 0;
}
