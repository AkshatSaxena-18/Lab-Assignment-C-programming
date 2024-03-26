#include <stdio.h>
#include <string.h>

union StudentData {
    char name[20];
    char subject[20];
    float percentage;
};

int main() {
    union StudentData students[2]; // Array of unions to store data for 2 students

    // Input data for student 1
    printf("Enter details for student 1:\n");
    printf("Name: ");
    scanf(" %[^\n]", students[0].name); // Read name with spaces

    printf("Subject: ");
    scanf(" %[^\n]", students[0].subject); // Read subject with spaces

    printf("Percentage: ");
    scanf("%f", &students[1].percentage); // Access percentage member of student 1 through the second element (due to union behavior)

    // Input data for student 2
    printf("\nEnter details for student 2:\n");
    printf("Name: ");
    scanf(" %[^\n]", students[1].name); // Read name with spaces (now safe to modify students[1])

    printf("Subject: ");
    scanf(" %[^\n]", students[1].subject); // Read subject with spaces

    printf("Percentage: ");
    scanf("%f", &students[2].percentage); // Access percentage member of student 2 through the third element (potential issue)

    // Display data for both students
    printf("\nStudent Details:\n");
    for (int i = 0; i < 2; i++) {
        printf("Student %d:\n", i + 1);
        printf("Name: %s\n", students[i].name);
        printf("Subject: %s\n", students[i].subject);
        printf("Percentage: %.2f\n", students[i].percentage);
    }

    return 0;
}
