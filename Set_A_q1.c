#include<stdio.h>
#include<stdio.h>

struct Student
{
    int sid;
    char name[20];
    float per;
}s;

int main()
{
    printf("\n---------------------------------");
    printf("\nEnter the Student Information: ");
    printf("\n------------------------------------");
    printf("\n Enter the student id: ");
    scanf("%d",&s.sid);
    printf("\nEnter the student name: ");
    scanf("%s",s.name);
    printf("\n Enter the student percentage: ");
    scanf("%f",&s.per);
    printf("-------------------------------------");



    printf("\n The Student id is : %d",s.sid);
    printf("\n The Student name is : %s",s.name);
    printf("\n The student got percentage is : %f",s.per);

    return 0;

}
