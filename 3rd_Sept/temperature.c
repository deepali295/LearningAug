#include<stdio.h>
#include<stdlib.h>

int main()
{
	printf("Enter temperature in C : ");
	double C;
	scanf("%lf",&C);

	double f=((C*9.0)/5.0)+32;
	printf("The temperature in fahrenheit = %lf\n",f);

	printf("Enter temp in F : ");
	double F;
	scanf("%lf",&F);
	double c=(F-32)*5.0/9.0;
	printf("The temp in C = %lf\n",c);
return 0;
}
