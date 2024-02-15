#include <stdio.h>

// Define a structure named 'Person'
struct Person {
    char name[50];
    int age;
    float height;
};

int main() {
    // Declare a variable of type 'struct Person'
    struct Person person1;

    // Assign values to the members of the structure
    strcpy(person1.name, "John Doe");
    person1.age = 25;
    person1.height = 5.9;

    // Display the information using the structure
    printf("Person Information:\n");
    printf("Name: %s\n", person1.name);
    printf("Age: %d\n", person1.age);
    printf("Height: %.2f feet\n", person1.height);

    return 0;
}

