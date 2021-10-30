#include <stdio.h>

int main() {
    
    srand(time(NULL));   // Initialization, should only be called once.
    int randomNumber = rand() % 100 + 1; // Generate a random number between 1 and 100.
    int guess;
    int tries = 0;
    int running = 1;
    char answer;

    // Main game loop
    while (running) {
        printf("Guess a number between 1 and 100: \n> "); // Prompt user for input.
        scanf("%d", &guess);
        tries++;

        // Check if the guess is correct
        if (guess == randomNumber) {
            printf("You guessed it! It was %d, it took you %d try/tries.\n", guess, tries);

            printf("Do you want to play again? (1/0) \n> ");
            scanf("%d", &answer);

            // Check if the user wants to play again
            if (answer) {
                tries = 0;
                randomNumber = rand() % 100 + 1;
            } else {
                running = 0;
            }
        } else if (guess < randomNumber) {
            printf("Your guess is too low.\n");
        } else {
            printf("Your guess is too high.\n");
        }
    }
    
    return 0;
}