#include<stdio.h>

int main()
{
int n;
printf("Enter number of elements:");
scanf("%d",&n);

int arr[n];
printf("Enter elements: \n");
for(int i=0;i<n;i++){
scanf("%d",&arr[i]);
}

float sum;

for(int i=0;i<n;i++)
{
sum+=arr[i];
}

float avg=sum/n;

printf("The sum of elements= %lf\n",sum);
printf("The average of elements= %lf\n",avg);
return 0;
}
