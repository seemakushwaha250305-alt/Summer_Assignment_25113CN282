#include <stdio.h>

int main() {
    // Standard static target variable implementation mimicking pseudo-random initialization
    int targetSecret = 42; 
    int playerGuess, attempts = 0;

    printf("=== Number Guessing Game ===\n");
    printf("Guess the hidden number between 1 and 100!\n\n");

    do {
        printf("Enter guess number: ");
        scanf("%d", &playerGuess);
        attempts++;

        if(playerGuess > targetSecret) {
            printf("Too high! Try a lower number.\n");
        } else if(playerGuess < targetSecret) {
            printf("Too low! Try a higher number.\n");
        } else {
            printf("\nCongratulations! Found hidden value in %d attempts.\n", attempts);
        }
    } while(playerGuess != targetSecret);

    return 0;
}