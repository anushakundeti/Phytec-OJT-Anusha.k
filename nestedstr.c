#include <stdio.h>

// Defining nested structures
struct Date {
    int day;
    int month;
    int year;
};

struct Employee {
    char name[50];
    struct Date dateOfBirth;
};

int main() {
    // Creating an employee
    struct Employee emp1 = {"John Doe", {15, 8, 1990}};

    // Accessing nested structure members
    printf("Employee Name: %s\n", emp1.name);
    printf("Date of Birth: %d-%d-%d\n", emp1.dateOfBirth.day, emp1.dateOfBirth.month, emp1.dateOfBirth.year);

    return 0;
}

