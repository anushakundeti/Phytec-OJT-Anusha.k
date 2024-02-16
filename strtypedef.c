#include <stdio.h>

typedef struct {
    char name[50];
    int age;
    float salary;
} Employee;

int main() {
    Employee emp1 = {"John", 30, 50000.0};
    printf("Employee: %s, Age: %d, Salary: %.2f\n", emp1.name, emp1.age, emp1.salary);

    return 0;
}

