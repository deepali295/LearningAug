#include<stdio.h>

int main()
{
	int n;
	printf("Enter no of elements: ");
	scanf("%d",&n);

	int arr[n];
	printf("Enter %d elements: ",n);
	for(int i=0;i<n;i++)
	 scanf("%d",&arr[i]);

	printf("Arrays elements are: \n");
	for(int i=0;i<n;i++)
		printf("%d ",arr[i]);
printf("\n");

	printf("Reverse Array elements : \n");	
	for(int i=n-1;i>=0;i--)
	 printf("%d ",arr[i]);
printf("\n");
	return 0;
	}
