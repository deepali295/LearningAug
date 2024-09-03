#include<stdio.h>
#include<stdlib.h>

int main()
{
	int a;
	int b;

	printf("Enter 2 integer values: \n");
	scanf("%d%d",&a,&b);
	int ret_val;
	ret_val=printf("The sum of %d and %d is %d\n",a,b,a+b);
	//printf("Number of characters printed : %d\n",ret_val);

	if(ret_val < 0)
		return EXIT_FAILURE;
	return EXIT_SUCCESS;	
}
