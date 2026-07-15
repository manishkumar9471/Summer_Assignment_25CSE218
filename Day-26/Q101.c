#include <stdio.h>

int main() {
    int secret = 25, guess;

    printf("Guess the number (1-50): ");
    scanf("%d", &guess);

    if (guess == secret)
        printf("Congratulations! Correct Guess.");
    else if (guess < secret)
        printf("Too Small.");
    else
        printf("Too Large.");

    return 0;
}