#include <stdio.h>

struct Point {
    int x;
    int y;
};

void displayPoint(struct Point p) {
    printf("Point: (%d, %d)\n", p.x, p.y);
}

int main() {
    struct Point p1 = {3, 5};
    displayPoint(p1);

    return 0;
}

