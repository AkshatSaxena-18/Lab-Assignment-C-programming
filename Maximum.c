#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a,b,c;
	printf("\n Enter 3 numbers:- ");
	scanf(" %d %d %d",&a,&b,&c);
// Code to find maximum number
	if(a>b)
	{
		if(a>c)
			printf("\n %d is maximum \n",a);
	}
	else if(b>c)
			printf("\n %d is maximum \n",b);
	else
			printf("\n %d is maximum \n",c);
// Code to find minimum number
	if(a<b)
	{
		if(a<c)
			printf("\n %d is minimum \n",a);
	}
	else if(b<c)
			printf("\n %d is minimum \n",b);
	else
			printf("\n %d is minimum \n",c);
printf("\n Average of (%d,%d,%d) is %d \n \n",a,b,c,(a+b+c)/3);
	return 0;
}