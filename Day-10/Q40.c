#include <stdio.h>

int main() {
    int i, j, rows;
    char ch;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    for(i = 1; i <= rows; i++) {

        // Print spaces
        for(j = 1; j <= rows - i; j++) {
            printf(" ");
        }

        // Print increasing characters
        ch = 'A';
        for(j = 1; j <= i; j++) {
            printf("%c", ch);
            ch++;
        }

        // Print decreasing characters
        ch -= 2;
        for(j = 1; j < i; j++) {
            printf("%c", ch);
            ch--;
        }

        printf("\n");
    }

    return 0;
}