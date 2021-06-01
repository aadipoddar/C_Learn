#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int number, guess, nguess = 0;
    srand(time(0));
    number = rand() % 100 + 1; //generates random number between 1 and 100

    //keep running loop until the number is guessed
    do
    {
        printf("Guess a random number between 1 and 100\n");
        scanf("%d", &guess);

        if (guess > number)
            printf("Lower number please\n");

        else if (guess < number)
            printf("Upper number please\n");

        else
            printf("The guesses in %d attempts\n", nguess);

        nguess++;

    } while (guess != number);

    return 0;
}