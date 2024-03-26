#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_EMPLOYEES 100

struct Employee {
    int eno;
    char ename[50];
    float salary;
};

int num_employees = 0; // Global variable to track the number of employees
void add_employee() {
    if (num_employees == MAX_EMPLOYEES) {
        printf("Error: Maximum number of employees reached.\n");
        return;
    }

    struct Employee *new_emp = malloc(sizeof(struct Employee)); // Allocate memory for new employee

    printf("Enter employee details:\n");
    printf("Employee number: ");
    scanf("%d", &new_emp->eno);
    printf("Employee name: ");
    scanf(" %[^\n]", new_emp->ename); // Read name with spaces

    printf("Salary: ");
    scanf("%f", &new_emp->salary);

    // Directly copy data to the array and increment employee count
    memcpy(&employees[num_employees], new_emp, sizeof(struct Employee));
    num_employees++;
    free(new_emp); // Free allocated memory for temporary pointer
}

int main() {
    struct Employee employees[MAX_EMPLOYEES]; // Array to store employee data

    int choice, found = 0;

    while (1) {
        printf("\nEmployee Management System\n");
        printf("1. Add Employee\n");
        printf("2. Display Employees with Salary > 10000\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                add_employee();
                break;

            case 2:
                if (num_employees == 0) {
                    printf("No employees found in the library.\n");
                    break;
                }

                found = 0;
                printf("\nEmployees with salary greater than 10000:\n");
                for (int i = 0; i < num_employees; i++) {
                    if (employees[i].salary > 10000.0f) {
                        printf("Employee %d:\n", i + 1);
                        printf("Employee number: %d\n", employees[i].eno);
                        printf("Employee name: %s\n", employees[i].ename);
                        printf("Salary: %.2f\n", employees[i].salary);
                        found = 1;
                    }
                }
                if (!found) {
                    printf("No employees found with salary greater than 10000.\n");
                }
                break;

            case 3:
                printf("Exiting program.\n");
                exit(0);

            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}
