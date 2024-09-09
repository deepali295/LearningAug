#include<stdio.h>

int main()
{
int n;
printf("Enter size:\n");
scanf("%d",&n);

int arr[n];
printf("Enter elements: \n");
for(int i=0;i<n;i++)
 scanf("%d",&arr[i]);

int i,j,k;

for(i=0;i<n;i++)
{ 	
	for(j=i+1;j<n;j++)
	{
	if(arr[i]==arr[j])
	{
	for(k=j;k<n-1;k++){
		arr[k]=arr[k+1];
	}
	n--;
	j--;
	}
	}
}

printf("New array: \n");
for(int i=0;i<n;i++)
 printf("%d ",arr[i]);

return 0;
}
