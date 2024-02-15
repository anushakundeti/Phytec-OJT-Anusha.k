#include <stdio_ext.h>
#include <string.h>


// Structures
struct Student {
    int rollNumber;
    char name[50];
};

struct Course {
    int courseCode;
    char courseName[50];
};

struct Faculty {
    int facultyID;
    char facultyName[50];
};

// Function to add a new student
void addStudent(struct Student students[], int *studentCount) {
    struct Student newStudent;
    printf("Enter Roll Number: ");
    scanf("%d", &newStudent.rollNumber);
    printf("Enter Name: ");
    scanf("%s", newStudent.name);
    
    students[*studentCount] = newStudent;
    (*studentCount)++;
    printf("Student added successfully!\n");
}

// Function to display all students
void displayStudents(struct Student students[], int studentCount) {
    printf("Student List:\n");
    for (int i = 0; i < studentCount; i++) {
        printf("Roll Number: %d, Name: %s\n", students[i].rollNumber, students[i].name);
    }
}

// Function to add a new course
void addCourse(struct Course courses[], int *courseCount) {
    struct Course newCourse;
    printf("Enter Course Code: ");
    scanf("%d", &newCourse.courseCode);
    __fpurge(stdin);
    printf("Enter Course Name: ");
    scanf("%s", newCourse.courseName);
    
    courses[*courseCount] = newCourse;
    (*courseCount)++;
    printf("Course added successfully!\n");
}

// Function to display all courses
void displayCourses(struct Course courses[], int courseCount) {
    printf("Course List:\n");
    for (int i = 0; i < courseCount; i++) {
        printf("Course Code: %d, Name: %s\n", courses[i].courseCode, courses[i].courseName);
    }
}

int main() {
    struct Student students[100];
    int studentCount = 0;

    struct Course courses[50];
    int courseCount = 0;

    struct Faculty faculties[20];
    int facultyCount = 0;

    int choice;
    do {
        printf("College Management System\n");
        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Add Course\n");
        printf("4. Display Courses\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addStudent(students, &studentCount);
                break;
            case 2:
                displayStudents(students, studentCount);
                break;
            case 3:
                addCourse(courses, &courseCount);
                break;
            case 4:
                displayCourses(courses, courseCount);
                break;
            case 5:
                printf("Exiting program.\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 5);

    return 0;
}


