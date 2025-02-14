#include <stdio.h>
#include <string.h>

// Defining the structure
struct Student {
    char name[50];
    int roll_no;
    float marks1, marks2, marks3;
};

int main() {
    struct Student s;
    printf("Enter student's name: ");
    fgets(s.name, sizeof(s.name), stdin);
    s.name[strcspn(s.name, "\n")] = 0;
    printf("Enter roll number: ");
     scanf("%d", &s.roll_no);

    printf("Enter marks for subject 1: ");
    scanf("%f", &s.marks1);

    printf("Enter marks for subject 2: ");
    scanf("%f", &s.marks2);

    printf("Enter marks for subject 3: ");
    scanf("%f", &s.marks3);
    printf("\nStudent Details:\n");
    printf("Name: %s\n", s.name);
    printf("Roll Number: %d\n", s.roll_no);
    printf("Marks for Subject 1: %.2f\n", s.marks1);
    printf("Marks for Subject 2: %.2f\n", s.marks2);
    printf("Marks for Subject 3: %.2f\n", s.marks3);

    return 0;
}
