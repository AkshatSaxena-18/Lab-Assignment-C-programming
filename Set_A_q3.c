#include<stdio.h>

struct employee
{
    int empid;
    char emp_name[20];
    char desg[20];
};

void emp_info(struct employee e)
{
    printf("\n------------------------------");
    printf("\nThe Employee id is: %d",e.empid);
    printf("\nThe name of the employee: %s",e.emp_name);
    printf("\nThe Employee designation :%s",e.desg);
}

void main()
{
    struct employee e={101,"Akshat","Manager"};
    emp_info(e);
}