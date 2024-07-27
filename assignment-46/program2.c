// Program to accept name of the file and create that file

#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>

int main()
{
    char FileName[20];
    int fd = 0;

    printf("Enter the name of file that you want to create :\n");
    scanf("%s", FileName);

    fd = creat(FileName, 0777);

    if (fd == -1)
    {
        printf("Unable to create file\n");
    }
    else
    {
        printf("File gets created successfully with fd %d", fd);
    }

    close(fd);
    
    return 0;
}
