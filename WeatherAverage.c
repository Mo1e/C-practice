#include <stdio.h>
#include <stdlib.h>

#define YEARS 5
#define MONTHS 12

int main()
{
    float temperature [YEARS][MONTHS] =
    {
        {17.3, 18.7, 21, 27.6, 31.1, 33.2, 34.8, 35.9, 32.7, 29.1, 24.3, 20.1},
        {17.9, 19.1, 21.3, 27.1, 31.2, 32.5, 34.9, 36.1, 32.5, 29.5, 24.1, 21.1},
        {17.4, 18.3, 20.9, 27.9, 30.7, 33.3, 35.1, 34.9, 32.3, 28.9, 23.7, 20.5},
        {17.1, 18.5, 21.7, 26.6, 31.5, 33.2, 34.5, 35.4, 32.7, 29.3, 24.5, 19.7},
        {18.3, 18.1, 20.8, 26.9, 31.9, 33.4, 35.1, 35.2, 32.1, 29.6, 23.9, 20.2},
    };

    float totalSum;
    int Year = 2016;
    for (int i = 0; i < YEARS; i++)
    {

        float yearlySum = 0.0;
        for (int j = 0; j < MONTHS; j++)
        {
            yearlySum += temperature [i][j];
        }
        printf("Average temperature in %d was %.2f \n", Year, yearlySum/MONTHS);
        Year ++;
        totalSum +=yearlySum;

    }
    printf("\nAverage temperature in Huizhou within last 5 years is about %.2f \n", totalSum / (YEARS*MONTHS));

    printf("\nMonthly averages: \n");
    printf(" Jan    Feb   Mar   Apr   May   Jun   Jul   Aug   Sep   Oct   Nov   Dec\n");
    for (int i = 0; i < MONTHS; i++)
    {
        float monthlySum = 0.0;
        for (int j = 0; j < YEARS; j++)
        {
            monthlySum += temperature[j][i];
        }
        printf(" %.1f ", monthlySum/YEARS);
    }
    return 0;
}
