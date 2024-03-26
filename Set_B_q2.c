#include <stdio.h>
#include <string.h>

struct Student {
    int roll_no;
    char stud_name[50];
    char address[100];
};

void swap_students(struct Student *a, struct Student *b) {
    struct Student temp = *a;
    *a = *b;
    *b = temp;
}

int compare_students(const struct Student *a, const struct Student *b) {
    return strcmp(a->stud_name, b->stud_name);
}

int main() {
    int n;

    printf("Enter the number of students: ");
    scanf("%d", &n);

    struct Student students[n];

    for (int i = 0; i < n; i++) {
        printf("\nEnter details for student %d:\n", i + 1);
        printf("Roll number: ");
        scanf("%d", &students[i].roll_no);
        printf("Student name: ");
        scanf(" %[^\n]", students[i].stud_name); // Read name with spaces
        printf("Address: ");
        scanf(" %[^\n]", students[i].address); // Read address with spaces
    }

    // Sort students alphabetically by name using qsort
    qsort(students, n, sizeof(struct Student), compare_students);

    printf("\nStudents in alphabetical order:\n");
    for (int i = 0; i < n; i++) {
        printf("Student %d:\n", i + 1);
        printf("Roll number: %d\n", students[i].roll_no);
        printf("Student name: %s\n", students[i].stud_name);
        printf("Address: %s\n", students[i].address);
    }

    return 0;
}
