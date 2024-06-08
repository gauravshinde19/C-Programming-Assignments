/*
    Accept division of student from user and depends on the division display exam timing. There are 4 divisions in school as A, B, C, D. Exam of division at 7.00 AM, B at 8.30 AM, C at 9.20 AM and D at 10.30 AM. (Application should be case insensitive).
*/

#include <stdio.h>

void DisplaySchedule(char chDiv)
{
    if ((chDiv == 65) || (chDiv == 97))
    {
        printf("Your Exam at 7.00 AM");
    }
    else if ((chDiv == 66) || (chDiv == 98))
    {
        printf("Your Exam at 8.30 AM");
    }
    else if ((chDiv == 67) || (chDiv == 99))
    {
        printf("Your Exam at 9.20 AM");
    }
    else if ((chDiv == 68) || (chDiv == 100))
    {
        printf("Your Exam at 10.30 AM");
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter your division :\n");
    scanf("%c", &cValue);

    DisplaySchedule(cValue);

    return 0;
}
