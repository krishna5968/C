#include <stdio.h>

void inputStudentData(int roll[], float marks[][3], int n) {
    for (int i = 0; i < n; i++) {
        printf("Enter data for student %d:\n", i+1);
        printf("Roll number: ");
        scanf("%d", &roll[i]);
        printf("Marks in subject 1: ");
        scanf("%f", &marks[i][0]);
        printf("Marks in subject 2: ");
        scanf("%f", &marks[i][1]);
        printf("Marks in subject 3: ");
        scanf("%f", &marks[i][2]);
    }
}

void calculatePercentage(float marks[][3], float percent[], int n) {
    for (int i = 0; i < n; i++) {
        float total = 0.0;
        for (int j = 0; j < 3; j++) {
            total += marks[i][j];
        }
        percent[i] = total / 3.0;
    }
}

void displayStudentData(int roll[], float marks[][3], float percent[], int n) {
    printf("\nStudent data:\n");
    for (int i = 0; i < n; i++) {
        printf("Roll number: %d\n", roll[i]);
        printf("Marks in subject 1: %.2f\n", marks[i][0]);
        printf("Marks in subject 2: %.2f\n", marks[i][1]);
        printf("Marks in subject 3: %.2f\n", marks[i][2]);
        printf("Percentage: %.2f%%\n\n", percent[i]);
    }
}

int main() {
    int n;
    printf("Enter the number of students: ");
    scanf("%d", &n);

    int roll[n];
    float marks[n][3], percent[n];

    inputStudentData(roll, marks, n);
    calculatePercentage(marks, percent, n);
    displayStudentData(roll, marks, percent, n);

    return 0;
}
