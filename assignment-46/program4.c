// Write application which accepts file name from user and display size of file

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>

int main()
{
    char FileName[30];
    char Buffer[1024] = {'\0'};
    int fd = 0;
    int iRet = 0;
    int iSize = 0;

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
        iSize = iRet + iSize;
    }
    printf("Number of bytes : %d\n", iSize);

    close(fd);

    return 0;
}
