#include <stdio.h>

int main() {
    int n, sum = 0;

    // Input: Get the value of n from the user
    printf("Enter a positive integer n: ");
    scanf("%d", &n);

    // Calculate the sum of the first n natural numbers
    for (int i = 1; i <= n; ++i) {
        sum += i;
    }

    // Output: Display the result
    printf("Sum of the first %d natural numbers is: %d\n", n, sum);

    return 0;
}

