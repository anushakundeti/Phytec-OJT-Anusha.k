#include <stdio.h>

struct Student {
    char name[50];
    int roll;
};

void display(struct Student s[], int n) {
    for (int i = 0; i < n; i++) {
        printf("Name: %s, Roll: %d\n", s[i].name, s[i].roll);
    }
}

int main

