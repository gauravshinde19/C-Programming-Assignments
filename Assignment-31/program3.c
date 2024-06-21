// Program to accept string from user and reverse each word in place

#include <stdio.h>
#include <stdbool.h>

void Reverse(char *start, char *end)
{
    char temp = '\0';
    while (start < end)
    {
        temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

void ReverseWord(char *str)
{
    char *word_start = NULL;
    char *temp = str;

    while (*temp != '\0')
    {
        if ((word_start == NULL) && (*temp != ' ' && *temp != '\t'))
        {
            word_start = temp;
        }
        if (word_start && (*(temp + 1) == ' ' || *(temp + 1) == '\t' || *(temp + 1) == '\0'))
        {
            Reverse(word_start, temp);
            word_start = NULL;
        }
        temp++;
    }
}

int main()
{
    char arr[100];

    printf("Enter a string :\n");
    scanf("%[^\n]s", arr);

    ReverseWord(arr);

    printf("Reverse words of string :\n%s\n", arr);

    return 0;
}
