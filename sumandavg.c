#include <stdio.h>

void sumAndAverage(int m, int n, int *sum, double *average) {
    int total = 0;
    int count = 0;

    for (int i = m; i <= n; i++) {
        total += i;
        count++;
    }

    *sum = total;
    *average = (double)total / count;
}

int main() {
    int m, n;
    int sum;
    double average;

    printf("Enter the lower limit (m): ");
    scanf("%d", &m);

    printf("Enter the upper limit (n): ");
    scanf("%d", &n);

    if (m <= n) {
        sumAndAverage(m, n, &sum, &average);
        printf("Sum of numbers from %d to %d: %d\n", m, n, sum);
        printf("Average of numbers from %d to %d: %.2lf\n", m, n, average);
    } else {
        printf("Invalid input: m should be less than or equal to n.\n");
    }

    return 0;
}

