#include<stdio.h>

int main()
{
	int arr[10];

	for(int i=0;i<10;i++)
	 arr[i]=i+1;

	printf("The first natural no are:\n");
	for(int i=0;i<10;i++){
	printf("%d ",arr[i]);
	}
	printf("\n");
	return 0;
	}
