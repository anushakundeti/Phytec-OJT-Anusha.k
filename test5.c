#include <stdio.h>

// Defining a structure
struct Student {
    char name[50];
    int rollNumber;
    float marks;
};

int main() {
    // Array of structures
    struct Student students[3];

    // Initializing array of structures
    for (int i = 0; i < 3; ++i) {
        printf("Enter details of student %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Roll Number: ");
        scanf("%d", &students[i].rollNumber);
        printf("Marks: ");
        scanf("%f", &students[i].marks);
    }

    // Displaying array of structures
    printf("\nDetails of students:\n");
    for (int i = 0; i < 3; ++i) {
        printf("Student %d\n", i + 1);
        printf("Name: %s\n", students[i].name);
        printf("Roll Number: %d\n", students[i].rollNumber);
        printf("Marks: %.2f\n", students[i].marks);
    }

    return 0;
}

