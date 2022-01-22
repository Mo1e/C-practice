#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int arr [10];
    time_t t;
    srand((unsigned)time(&t));
    float arrSum;

    for (int i = 0; i < 10; i++)
    {
        int randomNumber = rand()%100;
        arr[i] = randomNumber;
        printf("%d ", arr[i]);
        arrSum += arr[i];
    }
    printf("\nTotal sum is %.0f", arrSum);
    int Max = arr[0];
    int Min = arr[0];

    float Average = arrSum/10;

    for (int i = 1; i < 10; i++)
    {
        if (arr[i] > Max)
            Max = arr[i];
        else if (arr[i] < Min)
            Min = arr[i];

    }
    printf("\nMaximum is %d ", Max);
    printf("\nMinimum is %d ", Min);
    printf("\nAverage of your array is %.1f", Average);
    return 0;

}
