#include <stdio.h>

// Function to calculate the factorial using recursion
int factorial(int n) {
    if (n == 0) {
        return 1; // Base case: 0! is 1
    } else {
        return n * factorial(n - 1); // Recursive case: n! = n * (n-1)!
    }
}

int main() {
    int num;
    int result;

    printf("Enter a non-negative integer: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Please enter a non-negative integer.\n");
    } else {
        result = factorial(num);
        printf("The factorial of %d is %d\n", num, result);
    }

    return 0;
}

