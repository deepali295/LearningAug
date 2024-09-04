#include<stdio.h>
#include<math.h>

int main()
{
int num, original_num, remainder, result=0, num_digits=0;

printf("Enter an integer: \n");
scanf("%d",&num);

original_num=num;

while(original_num !=0){
	original_num/=10;
	num_digits++;
}
original_num=num;

while(original_num != 0){
	remainder= original_num % 10;
	result +=pow(remainder,num_digits);
	original_num/=10;
}

if(result==num){
	printf("%d is an Armstrong no.\n",num);
}else
	printf("Not an armstrong no.\n");

return 0;
}
