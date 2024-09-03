#include<stdio.h>
#include<stdlib.h>

int main()
{
int temp;
printf("Enter temperature: ");
scanf("%d",&temp);

if(temp>30)
	printf("It's hot outside, stay hydrated!\n");
else if(temp>=20)
	printf("The weather is nice and warm\n");
else if(temp>=10)
	printf("It's a bir chilly,wear a jacket\n");
else
 	printf("It's cold outside,stay warm!\n");
return 0;
}
