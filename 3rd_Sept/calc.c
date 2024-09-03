#include<stdio.h>
#include<stdlib.h>

int main()
{
 int num1,num2,result;
 printf("Enter two numbers : \n");
 scanf("%d%d",&num1,&num2);

char op;
printf("Enter an operator(+,-,*,/)\n");
scanf(" %c",&op);

switch(op)
{
	case '+':
	result=num1+num2;
	printf("Sum is %d\n",result);
	break;
	case '-':
	result=num1-num2;
	printf("Result is %d\n",result);
	break;
	case '*':
	result=num1*num2;
	printf("Result is %d\n",result);
	break;
	case '/':
	result=num1/num2;
	printf("Result is %d\n",result);
	break;
	default:
	printf("ENter valid option");
	break;
}
return 0;
}
