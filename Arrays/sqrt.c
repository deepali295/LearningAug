#include<stdio.h>
#include<math.h>

int main()
{
	int num, sqrt_floor,sqrt_ceil;
	int lower_sq,upper_sq;

	printf("Enter a positive integer: \n");
	scanf("%d",&num);

	sqrt_floor=(int)sqrt(num);
	sqrt_ceil=sqrt_floor + 1;

	lower_sq=sqrt_floor * sqrt_floor;
	upper_sq=sqrt_ceil * sqrt_ceil;

	if((num - lower_sq) <= (upper_sq - num)){
	printf("The closest integer with a whole no sq root is : %d\n",lower_sq);
	}
	else
	 printf("The closest integer with a whole no sq root is : %d\n",upper_sq);

	 return 0;
	 }
