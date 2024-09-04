#include<stdio.h>
#include <math.h>

int main()
{
int num, square, last_digits, num_digits;

printf("enter a number: \n");
scanf("%d",&num);

square=num * num;

num_digits=log10(num)+1;

last_digits= square % (int)pow(10,num_digits);

if(last_digits == num){
	printf("%d is an Automorphic number.\n",num);
	} else {
		printf("%d is not automorphic number.\n",num);
		}
		return 0;
		}

