// Program to accept N numbers and range from user and display all the elements from that range which are present

#include <stdio.h>
#include <stdlib.h>

void Range(int Arr[], int iLength, int iStart, int iEnd)
{
    int i = 0;

    printf("Elements between the range %d to %d :\n", iStart, iEnd);
    for (i = 0; i < iLength; i++)
    {
        if ((Arr[i] >= iStart) && (Arr[i] <= iEnd))
        {
            printf("%d\n", Arr[i]);
        }
    }
}

int main()
{
    int iSize = 0;
    int *p = 0;
    int iCnt = 0;
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter the number of elements you want :\n");
    scanf("%d", &iSize);

    p = (int *)malloc(iSize * sizeof(int));

    if (p == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }

    printf("Enter the %d elements :\n", iSize);
    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter element %d : ", iCnt + 1);
        scanf("%d", &p[iCnt]);
    }

    printf("Enter the starting number of range :\n");
    scanf("%d", &iValue1);

    printf("Enter the last number of range :\n");
    scanf("%d", &iValue2);

    Range(p, iSize, iValue1, iValue2);

    free(p);

    return 0;
}
