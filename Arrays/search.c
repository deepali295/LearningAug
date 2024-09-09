#include<stdio.h>

int main()
{

int arr[6]={5,2,6,1,9,3};
int size=sizeof(arr)/sizeof(arr[0]);
printf("Array elements are \n");
for(int i=0;i<size;i++)
 	printf("%d ",arr[i]);
printf("\n");

int element;
printf("Enter element to find: ");
scanf("%d",&element);

int index=-1;

for(int i=0;i<size;i++)
{
if(arr[i]==element)
{
index=i;
break;
}
}

if(index!=-1)
 printf("Element found at %d index\n",index);
else
 printf("Element not found");
} 


