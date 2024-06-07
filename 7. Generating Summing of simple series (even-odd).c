#include <stdio.h>

int main() {
    int n, i, sum = 0;

    printf("Enter the value of n for sum of first n even numbers: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        sum += 2 * i; // even numbers are 2, 4, 6, 8, ...
    }

    printf("Sum of first %d even numbers = %d\n", n, sum);

    // Alternatively, sum of first n odd numbers:
    sum = 0;
    for (i = 1; i <= n; i++) {
        sum += (2 * i - 1); // odd numbers are 1, 3, 5, 7, ...
    }

    printf("Sum of first %d odd numbers = %d\n", n, sum);

    return 0;
}
