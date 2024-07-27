// Program to accept file name and one count from user and read that number of characters from that file from starting position

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>

int main()
{
    char FileName[30];
    char Buffer[100];
    int iCount = 0;
    int fd = 0;
    int iRet = 0;

    printf("Enter the name of file that you want to open :\n");
    scanf("%s", FileName);

    fd = open(FileName, O_RDWR);
    if (fd == -1)
    {
        printf("Unable to open file\n");
        return 0;
    }

    printf("Enter the number of characters you want to read from file :\n");
    scanf("%d", &iCount);

    memset(Buffer, 0, sizeof(Buffer));

    iRet = read(fd, Buffer, iCount);
    if (iRet == -1)
    {
        printf("Unable to read file\n");
        return 0;
    }

    printf("Data from the file :\n%s\n", Buffer);

    close(fd);

    return 0;
}
