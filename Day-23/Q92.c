#include <stdio.h>

int main() {
    char str[100];
    int i, j, max = 0, count;
    char ch;

    printf("Enter a string: ");
    gets(str);

    for(i = 0; str[i] != '\0'; i++) {
        count = 1;

        for(j = i + 1; str[j] != '\0'; j++) {
            if(str[i] == str[j])
                count++;
        }

        if(count > max) {
            max = count;
            ch = str[i];
        }
    }

    printf("Maximum Occurring Character = %c", ch);

    return 0;
}