#include<stdio.h>
#include<stdlib.h>

int main()
{
	double wt;
	printf("Enter weight (in kg): \n");
	scanf("%lf",&wt);

	double ht;
	printf("Enter height (in m): \n");
	scanf("%lf",&ht);

	double bmi= wt/(ht*ht);
	printf("Calculated BMI = %lf \n",bmi);

	return 0;
}

