#include <stdio.h>

int main() {
    int n;

    // Get the size of the array from the user
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    // Declare an array of size n
    int arr[n];

    // Get array elements from the user
    printf("Enter %d elements of the array:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Get the position from the user
    int position;
    printf("Enter the position in the array: ");
    scanf("%d", &position);

    // Validate the position
    if (position < 0 || position >= n) {
        printf("Invalid position. Please enter a valid position between 0 and %d.\n", n - 1);
        return 1;  // Exit with an error code
    }

    // Calculate the sum from the given position to the end of the array
    int sum = 0;
    for (int i = position; i < n; i++) {
        sum += arr[i];
    }

    // Display the result
    printf("Sum of the array from position %d to the end: %d\n", position, sum);

    return 0;  // Exit successfully
}

