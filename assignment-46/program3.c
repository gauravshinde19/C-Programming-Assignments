// write application which accepts file name from the user and read all the data from that file and display content on the screen

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>

int main()
{
    char FileName[30];
    char Arr[100] = {'\0'};
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

    iRet = read(fd, Arr, 13);
    printf("Data from file :\n%s\n", Arr);
    printf("Number of bytes successfully read from the file are %d\n", iRet);

    close(fd);

    return 0;
}
