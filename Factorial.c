#include<stdio.h>
#include<string.h>

void main(int argc, char* argv[])
{
    int n,f=1,i;
    printf("Enter the value of n: ");
    scanf("%d",&n);

    if(argc != 2)
       {
            printf("Invalid Output");
            return 0;
       }
       

       n =atoi(argv[1]);
       if(n<0)
         {
            printf("Error Negative factorial does not exist:");
            return 1;
         }
         for(i=n;i>1;i--)
         {
            f=f*i;
         }
         printf("%d\n", f); // Print factorial 
    
    return 0;


    

}


