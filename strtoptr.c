#include <stdio.h>

// Defining a structure
struct Rectangle {
    int length;
    int width;
};

// Function to calculate area of rectangle using pointer to structure
int calculateArea(struct Rectangle *r) {
    return r->length * r->width;
}

int main() {
    struct Rectangle rect = {5, 10};

    // Passing pointer to structure to function
    int area = calculateArea(&rect);

    printf("Area of rectangle: %d\n", area);

    return 0;
}

