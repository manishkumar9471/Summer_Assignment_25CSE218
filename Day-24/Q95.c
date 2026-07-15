#include <stdio.h>

int main() {
    char str[200], longest[100];
    int i = 0, j = 0, max = 0;

    printf("Enter sentence: ");
    gets(str);

    char word[100];

    while(1) {
        if(str[i] != ' ' && str[i] != '\0') {
            word[j++] = str[i];
        } else {
            word[j] = '\0';

            if(j > max) {
                max = j;
                int k;
                for(k = 0; k <= j; k++)
                    longest[k] = word[k];
            }

            j = 0;
        }

        if(str[i] == '\0')
            break;

        i++;
    }

    printf("Longest Word = %s", longest);

    return 0;
}