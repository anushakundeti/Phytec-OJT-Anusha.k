#include <stdio.h>

// Defining a structure
struct Person {
    char name[50];
    int age;
};

int main() {
    // Declaring a structure variable
    struct Person person1 = {"Alice", 25};

    // Declaring a pointer to structure
    struct Person *ptr;

    // Assigning address of structure variable to pointer
    ptr = &person1;

    // Accessing structure members using pointer
    printf("Name: %s\n", ptr->name);
    printf("Age: %d\n", ptr->age);

    return 0;
}

