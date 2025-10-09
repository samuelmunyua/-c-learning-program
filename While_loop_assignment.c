/*
Name:samuel munyua 
Reg:CT100/G/26198/25
Description:while_loop_assignment
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int secretNumber, guess;

    // Seed the random number generator
    srand(time(0));

    // Generate a random number between 1 and 20
    secretNumber = (rand() % 20) + 1;

    printf("Welcome to the Number Guessing Game!\n");
    printf("I have chosen a number between 1 and 20.\n");

    // Repeat until the correct number is guessed
    do {
        printf("Enter your guess: ");
        scanf("%d", &guess);

        if (guess > secretNumber) {
            printf("Too high!\n");
        } else if (guess < secretNumber) {
            printf("Too low!\n");
        } else {
            printf("Congratulations! You guessed the correct number!\n");
        }

    } while (guess != secretNumber);

    return 0;
}
