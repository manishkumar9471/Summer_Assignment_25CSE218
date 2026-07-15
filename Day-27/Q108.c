#include <stdio.h>

int main() {
    int m1, m2, m3, total;
    float percentage;

    printf("Enter Marks of 3 Subjects: ");
    scanf("%d%d%d", &m1, &m2, &m3);

    total = m1 + m2 + m3;
    percentage = total / 3.0;

    printf("Total = %d\n", total);
    printf("Percentage = %.2f\n", percentage);

    if(percentage >= 60)
        printf("Division : First");
    else if(percentage >= 45)
        printf("Division : Second");
    else if(percentage >= 33)
        printf("Division : Third");
    else
        printf("Fail");

    return 0;
}