#include<stdio.h>

int main()
{
int n;
printf("Enter a positive no: \n");
scanf("%d",&n);
int sum=0;
while(n)
{
sum=sum+(n%10);
n=n/10;
}
printf("The sum of digits :%d \n",sum);
return 0;
}
