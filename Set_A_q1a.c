#include <stdio.h>

struct address {
    int house_number;
    char street[50];
};

struct employee {
    char name[50];
    int age;
    float salary;
    struct address address; // Nested structure as member variable
};

int main() {
    struct employee emp;

    printf("Enter employee details:\n");
    printf("Name: ");
    scanf(" %[^\n]", emp.name); // Read name with spaces

    printf("Age: ");
    scanf("%d", &emp.age);

    printf("Salary: ");
    scanf("%f", &emp.salary);

    printf("Address:\n");
    printf("House number: ");
    scanf("%d", &emp.address.house_number);

    printf("Street: ");
    scanf(" %[^\n]", emp.address.street); // Read street with spaces

    printf("\nEmployee Information:\n");
    printf("Name: %s\n", emp.name);
    printf("Age: %d\n", emp.age);
    printf("Salary: %.2f\n", emp.salary);
    printf("Address: %d, %s\n", emp.address.house_number, emp.address.street);

    return 0;
}
