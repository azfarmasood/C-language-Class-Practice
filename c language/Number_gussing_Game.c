#include <stdio.h>
#include <stdlib.h>


int main() {
    int secretNumber, guess = 0;

    // Random number between 1 and 50
    secretNumber = rand() % 50 + 1;

    printf("Welcome to Number Guessing Game!\n");
    printf("Guess the number between 1 and 50\n");

    // Keep asking until guess is correct
    while (guess != secretNumber) {
        printf("Enter your guess: ");
        scanf("%d", &guess);

        if (guess > secretNumber) {
            printf("Too high! Try again.\n");
        } else if (guess < secretNumber) {
            printf("Too low! Try again.\n");
        } else {
            printf("Correct! The number was %d\n", secretNumber);
        }
    }

    return 0;
}