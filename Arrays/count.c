#include<stdio.h>

int main()
{
	int n;
	printf("Enter size of array: \n");
	scanf("%d",&n);

	int arr[n];
	int freq[n];
	printf("Enter elements :\n");
	for(int i=0;i<n;i++)
	{
	 scanf("%d",&arr[i]);
	 freq[i]=-1;
	 }


	int count;
	int i,j;

	for(int i=0;i<n;i++)
	{
	count=1;
	for(int j=i+1;j<n;j++)
	{
	if(arr[i]==arr[j])
	{
	count++;
	freq[j]=0;
	}
	}
	if(freq[i] !=0)
	{
	freq[i]=count;
	}
	}

	printf("Element | Frequency\n");
	for(int i=0;i<n;i++){
	if(freq[i]!=0){
	printf("  %d    |   %d\n",arr[i],freq[i]);
	}
	}
	return 0;
	}


