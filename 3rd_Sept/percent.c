#include<stdio.h>
#include<stdlib.h>

int main()
{
float percent;
printf("Enter percent: \n");
scanf("%f",&percent);
char grade;
if(percent >=90)
	grade='A';
else if(percent>=80)	
	grade='B';
else if(percent>=70)	
	grade='C';
else if(percent>=60)	
	grade='D';	
else if(percent<60)
	printf("Fail");
else
{
printf("Invalid percent");
return 1;
}

printf("Your grade is  %c\n",grade);
return 0;
}
