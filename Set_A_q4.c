#include <stdio.h>
#include <string.h>

union StudentData {
    char name[20];
    char subject[20];
    float percentage;
};

void store_student_data(union StudentData *student, char *name, char *subject, float percentage) {
    strcpy(student->name, name); // Use strcpy for safer name assignment
    strcpy(student->subject, subject); // Use strcpy for safer subject assignment
    student->percentage = percentage;
}

void access_student_data(union StudentData *student) {
    printf("Student Details:\n");
    printf("Name: %s\n", student->name);
    printf("Subject: %s\n", student->subject);
    printf("Percentage: %.2f\n", student->percentage);
}

int main() {
    union StudentData student;
    char name[20], subject[20];

    printf("Enter student details:\n");
    printf("Name: ");
    scanf(" %[^\n]", name); // Read name with spaces

    printf("Subject: ");
    scanf(" %[^\n]", subject); // Read subject with spaces

    printf("Percentage: ");
    scanf("%f", &student.percentage); // Access percentage directly

    store_student_data(&student, name, subject, student.percentage); // Pass address and copy data

    access_student_data(&student);

    return 0;
}
