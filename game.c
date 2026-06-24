#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int lower = 1, upper = 500;
    int randomNumber, guess, attempts = 0;

    srand(time(0));
    randomNumber = (rand() % (upper - lower + 1)) + lower;

    printf("Guess a number between %d and %d\n", lower, upper);

    while (1) {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        attempts++;

        if (guess > randomNumber&&guess-randomNumber>10) {
            printf("Too high! Try again.\n");
        } else if (guess < randomNumber&&randomNumber-guess>10) {
            printf("Too low! Try again.\n");
        }else if(abs(guess-randomNumber)<=3&&guess!=randomNumber){
            printf("Close! Try again\n");
        }else if(guess>randomNumber){
            printf("high! Try again.\n");
        }else if(guess<randomNumber){
            printf("low! Try again.\n");
        }else {
            printf("Congratulations! You guessed the number in %d attempts.\n", attempts);
            break;
        }
    }

    return 0;
}
