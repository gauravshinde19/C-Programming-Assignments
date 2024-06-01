// Program to accept N numbers from user and dispalay all the elements which are divisible by 3 and 5

#include <stdio.h>
#include <stdlib.h>

void Display(int Arr[], int iLength)
{
    int i = 0;

    printf("Elements divisible by 3 and 5 :\n");
    for (i = 0; i < iLength; i++)
    {
        if (((Arr[i] % 3) == 0) && ((Arr[i] % 5) == 0))
        {
            printf("%d\n", Arr[i]);
        }
    }
}

int main()
{
    int iSize = 0;
    int *p = NULL;
    int iCnt = 0;

    printf("Enter number of elements that you want : \n");
    scanf("%d", &iSize);

    p = (int *)malloc(iSize * sizeof(int));

    if (p == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }

    printf("Enter %d elements : \n", iSize);
    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter element %d : ", iCnt + 1);
        scanf("%d", &p[iCnt]);
    }

    Display(p, iSize);

    free(p);

    return 0;
}
