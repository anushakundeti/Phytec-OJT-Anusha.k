#include <stdio.h>

// Defining a structure
struct Point {
    int x;
    int y;
};

int main() {
    // Declaring structure variable
    struct Point p1;

    // Initializing structure members
    p1.x = 10;
    p1.y = 20;

    // Accessing and printing structure members
    printf("Coordinates of point: (%d, %d)\n", p1.x, p1.y);

    return 0;
}

