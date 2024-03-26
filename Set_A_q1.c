#include<stdio.h>

struct employee 
{
    char ename[20];
    int age;
    int sal;
};

struct address
{
    int house_no;
    char street[20];
    struct employee emp;
};

void main()
{
    struct employee emp;
    printf("\n-----------------------------");
    printf("\nEnter the employee information: ");
    printf("\n--------------------------------");
    printf("\nEnter the employee name: ");
    scanf("%s",emp.ename);
    printf("\nEnter the age of an employee: ");
    scanf("%d",&emp.age);
    printf("\nEnter the salary of an employee: ");
    scanf("%d",&emp.sal);

    struct address add;
    printf("\n-------------------------------------");
    printf("\nEnter the information about the employee address: ");
    printf("\n---------------------------------------");
    printf("\nEnter the House number: ");
    scanf("%d",&add.house_no);
    printf("\nEnter the street name : ");
    scanf("%s",add.street);
    printf("------------------------------------------");
    printf("\n");

    // Print the information of both structure 

    // The information of Structure of an employee.

    printf("\nThe name of the employee is : %s",emp.ename);
    printf("\nThe age of an employee is : %d",emp.age);
    printf("\nThe salary of an employee is %d",emp.sal);

    // The information of Structure of an address.

    printf("\nThe House number of an employee is: %d",add.house_no);
    printf("\nTHe street name of an employee: %s",add.street);
    printf("\n");

    
        
    
    
}

