#include <stdio.h>
int main() {
    int n=0, i, sum = 0;
    float avg, percentage;
    printf("Enter number of subjects: ");
    scanf("%d", &n);
    int marks[n];
    printf("Enter marks for %d subjects:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &marks[i]);
        sum += marks[i];
    }
    avg = (float)sum / n;
    percentage = (float)(sum * 100) / (n * 100);
    printf("Average marks = %.2f\n", avg);
    printf("Overall percentage = %.2f%%\n", percentage);
    if (percentage >= 90) {
        printf("Grade: A\n");
    } else if (percentage >= 80) {
        printf("Grade: B\n");
    } else if (percentage >= 70) {
        printf("Grade: C\n");
    } else if (percentage >= 60) {
        printf("Grade: D\n");
    } else {
        printf("Grade: F\n");
    }
    return 0;
}
