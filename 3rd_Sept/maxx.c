#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n1,n2,n3;
	printf("Enter three integers: \n");
	scanf("%d%d%d",&n1,&n2,&n3);

	int max=(n1>n2)?((n1>n3)?n1:n3):((n2>n3)?n2:n3);

	printf("The max of three number is %d\n",max);

	return 0;

}
