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

if(bmi<18.5)
	printf("Underweight\n");
else if(bmi >=18.5 && bmi<=24.9)
	printf("Normal Weight\n");
else if(bmi>=25 && bmi<=29.9)
	printf("Overweigh\nt");
else
	printf("Obesity");
return 0;
}

