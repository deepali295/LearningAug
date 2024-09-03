#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n1,n2;
	printf("Enter 2 numbers: \n");
	scanf("%d%d",&n1,&n2);

	int max=(n1>n2)?n1:n2;

	printf("The max between 2 numbers is: %d \n",max);

	return 0;
	

}
