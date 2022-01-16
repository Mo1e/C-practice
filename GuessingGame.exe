#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    time_t t;
    srand((unsigned)time(&t));
    int secret = rand()%21;
    int guessed;

    for (int i = 5; i > 0; --i){
        printf("\nGuess a number from 0 to 20 I am thinking about:\nYou have got %d tries left\n", i);
        scanf("%d",&guessed);
        if (guessed == secret) {
            printf("\nWow you guessed correctly!\n");
            return;
        }
        else if (guessed < 0 || guessed > 20){
            printf("\nIt must be between 0 and 20\n");
        }
        else if (guessed < secret){
            printf("\nTry a greater number\n");
        }
        else if (guessed > secret) {
            printf("\nTry a lower number\n");
        }
    }
    printf("Game over");
    return 0;
}
