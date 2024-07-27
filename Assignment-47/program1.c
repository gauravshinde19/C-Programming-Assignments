// Program to accept file name from user and count capital characters from that file

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>

int main()
{
    char FileName[30];
    char Buffer[100] = {'\0'};
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

    while ((iRet = read(fd, Buffer, sizeof(Buffer))) != 0)
    {
        for (i = 0; i < iRet; i++)
        {
            if (Buffer[i] >= 'A' && Buffer[i] <= 'Z')
            {
                iCount++;
            }
        }
    }

    printf("Number of capital characters : %d\n", iCount);

    close(fd);

    return 0;
}
