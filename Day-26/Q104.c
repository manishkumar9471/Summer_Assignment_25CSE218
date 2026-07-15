#include <stdio.h>

int main() {
    int ans, score = 0;

    printf("Q1. Capital of India?\n");
    printf("1. Delhi\n2. Mumbai\n3. Kolkata\n");
    scanf("%d", &ans);

    if(ans == 1)
        score++;

    printf("Q2. 5 + 7 = ?\n");
    printf("1. 10\n2. 12\n3. 15\n");
    scanf("%d", &ans);

    if(ans == 2)
        score++;

    printf("Your Score = %d/2", score);

    return 0;
}