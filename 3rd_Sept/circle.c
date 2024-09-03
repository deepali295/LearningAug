#include <stdio.h>
#include <stdlib.h>
#define PI 3.14

int main()
{
	printf("Enter radius of the circle: \n");
	int r;
	scanf("%d",&r);

	float area= PI * r*r;
	float circum=2*PI*r;

	printf("The area of circle = %f\n",area);
	printf("The circumference of circle = %f\n",circum);
return 0;
}
