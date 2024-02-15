#include <stdio.h>

int main() {
    int arr[100] = { 0 };
    int i, temp, n = 10;

    // initial array of size 10
    for (i = 0; i < 10; i++)

        arr[i] = i + 1;
    
    // print the original array
    printf("Original Array: ");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
	int pos=5;
    // reverse the array
    for (i = pos; i < n/2 ; i++) {
        // swap elements at i and (n-i-1)
        temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
	
    }

    // print the reversed array
    printf("Reversed Array: ");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");

    return 0;
}

