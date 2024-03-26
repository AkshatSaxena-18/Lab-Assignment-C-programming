#include<stdio.h>

struct stud
{
    int rollno;
    char stud_name[20];
    int marks1,marks2,marks3;
    int total;
    float avg;

}s1;

void main()
{
    int total=0;
    float avg;
    printf("\n---------------------------------");
    printf("\nEnter the Student Information: ");
    printf("\n------------------------------------");
    printf("\nEnter the student rollno: ");
    scanf("%d",&s1.rollno);
    printf("\nEnter the student name: ");
    scanf("%s",s1.stud_name);
    printf("\nEnter the student marks of three subjects: ");
    scanf("%d%d%d",&s1.marks1,&s1.marks2,&s1.marks3);
    printf("-------------------------------------");

    total=s1.marks1 + s1.marks2 + s1.marks3;
    avg=(s1.marks1 + s1.marks2 + s1.marks3)/3;

    printf("\nThe student Roll no:%d ",s1.rollno);
    printf("\nThe name of the student:%s ",s1.stud_name);
    printf("\nThe total of three subject marks : %d",total);
    printf("\nThe average of marks of three subjects: %f",avg);
}