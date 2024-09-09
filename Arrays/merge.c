#include<stdio.h>

int main()
{
int n1,n2;
printf("Enter size of arr1: \n");
scanf("%d",&n1);
int arr1[n1];
printf("Enter elements of arr1: \n");
for(int i=0;i<n1;i++)
 scanf("%d",&arr1[i]);

int arr2[n2];
printf("Enter size of arr2:\n");
scanf("%d",&n2);
printf("Enter elements of arr2: \n");
for(int i=0;i<n2;i++)
 scanf("%d",&arr2[i]);

int mergearr[n1+n2];

//copying 1st array into merge array
for(int i=0;i<n1;i++)
 mergearr[i]=arr1[i];

//copying 2nd array into merge
 for(int i=0;i<n2;i++)
  mergearr[n1+i]=arr2[i];

 printf("The merged array is :\n");
 for(int i=0;i<n1+n2;i++)
  printf("%d ",mergearr[i]);

 return 0;
 }
