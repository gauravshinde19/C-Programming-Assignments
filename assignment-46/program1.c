// Program to accept name of the file and open that file into read mode

#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>

int main()
{
    char FileName[20];
    int fd = 0;

    printf("Enter the name of file that you want to open :\n");
    scanf("%s", FileName);

    fd = open(FileName, O_RDONLY);

    if (fd == -1)
    {
        printf("Unable to open file\n");
    }
    else
    {
        printf("File gets opened successfully with fd %d", fd);
    }

    close(fd);
    
    return 0;
}
