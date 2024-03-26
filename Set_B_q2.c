#include<stdio.h>
#include<stdlib.h>
int main()

{
    char str[20][20],s[20];
    int n,i,j,max=0,c;
    printf("Enter the total no of cities= ");
    scanf("%d",&n);
    printf("\n Enter the string: ");
    for(i=0;i<n;i++)
    {
        scanf("%s",str[i]);
        for(j=0;str[i][j] != '\0';j++);
        if(j>max)
        max=j;
    }
    do
    {
        printf("\n 1.Search for a city: ");
        printf("\n 2.Display the longest City name ");
        printf("\n3.Exit\n");
        scanf("%d",&c);
        switch (c)
        {
            case 1: 
                    printf("\nEnter the city to search: ");
                    scanf("%s",s);
                    for(i=0;i<n;i++)
                    {
                        for(j=0;str[i][j]!='\0';j++)
                        {
                            if(str[i][j]==*s)
                            printf("\n City name found at %d index\n",i);
                        }
                    }
            break;

            case 2:
                    for(i=0;i<n;i++)
                    {
                        for(j=0;str[i][j]!='\0';j++);
                        if(j==max)
                        {
                            printf("%s",str[i]);
                        }
                    }
        
            break;

            case 3:
                exit (1);
        }
    } 
    while(c<4);
    
}