// Program to accept name of the file and write that string into that file at the end.

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>

int main()
{
    char FileName[30];
    char str[100];
    int fd = 0;

    printf("Enter the name of the file in which you want to write the data:\n");
    scanf("%s", FileName);

    fd = open(FileName, O_RDWR | O_APPEND);

    if (fd == -1)
    {
        printf("Unable to open file\n");
        return 0;
    }

    printf("Enter the string:\n");
    scanf(" %[^'\n']", str);  

    write(fd, str, strlen(str));
    printf("Data gets written successfully\n");

    close(fd);

    return 0;
}
