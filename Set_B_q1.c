#include<stdio.h>

struct Student
{
    int Sid;
    char sname[30];
    float per;
}s[30];

void main()
{
    int n,i;
    printf("\n---------------------------");
    printf("\nEnter the Student Details: ");
    printf("\n----------------------------");
    printf("\nHow many students do want to display the details: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("\nEnter the student %d id: ",i);
        scanf("%d",&s[i].Sid);
        printf("\nEnter the student %d name: ",i);
        scanf("%s",s[i].sname);
        printf("\nEnter the student %d percentage: ",i);
        scanf("%f",&s[i].per);
        printf("\n-------------------------------------");
        printf("\n");
    }

        for(i=1;i<=n;i++)
        {
             printf("\nThe Student %d id is : %d",i,s[i].Sid);
             printf("\nThe Student %d name is : %s",i,s[i].sname);
             printf("\nThe student %d percentage is : %f",i,s[i].per);
        }

    

}