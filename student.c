#include <stdio.h>
#include <string.h>
#include "student.h"

void calculateGrade(Student *s) {
    float m = s->marks;

    if (m >= 90) strcpy(s->grade, "A+");
    else if (m >= 80) strcpy(s->grade, "A");
    else if (m >= 70) strcpy(s->grade, "B+");
    else if (m >= 60) strcpy(s->grade, "B");
    else if (m >= 50) strcpy(s->grade, "C+");
    else if (m >= 40) strcpy(s->grade, "C");
    else if (m >= 35) strcpy(s->grade, "D+");
    else strcpy(s->grade, "NG");
}

void addStudent(Student students[], int *count) {
    Student s;

    do {
        printf("Enter roll number (positive): ");
        scanf("%d", &s.roll);
    } while (s.roll <= 0);

    printf("Enter name: ");
    scanf(" %[^\n]", s.name);

    do {
        printf("Enter marks (0-100): ");
        scanf("%f", &s.marks);
    } while (s.marks < 0 || s.marks > 100);

    calculateGrade(&s);

    students[*count] = s;
    (*count)++;

    printf("Student added successfully!\n");
}

void displayStudents(Student students[], int count) {
    int i;

    if (count == 0) {
        printf("No students to display.\n");
        return;
    }

    printf("\nRoll\tName\t\tMarks\tGrade\n");
    for (i = 0; i < count; i++) {
        printf("%d\t%s\t\t%.2f\t%s\n",
               students[i].roll,
               students[i].name,
               students[i].marks,
               students[i].grade);
    }
}

void searchStudent(Student students[], int count, int roll) {
    int i;
    for (i = 0; i < count; i++) {
        if (students[i].roll == roll) {
            printf("Found: %d, %s, %.2f, %s\n",
                   students[i].roll,
                   students[i].name,
                   students[i].marks,
                   students[i].grade);
            return;
        }
    }
    printf("Student with roll %d not found.\n", roll);
}

void updateStudent(Student students[], int count, int roll) {
    int i;
    for (i = 0; i < count; i++) {
        if (students[i].roll == roll) {
            do {
                printf("Enter new marks (0-100): ");
                scanf("%f", &students[i].marks);
            } while (students[i].marks < 0 || students[i].marks > 100);

            calculateGrade(&students[i]);
            printf("Marks updated successfully!\n");
            return;
        }
    }
    printf("Student with roll %d not found.\n", roll);
}

