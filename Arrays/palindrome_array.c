#include<stdio.h>

int main()
{
int n;
printf("Enter size");
scanf("%d",&n);

int arr[n];
printf("Enter elements\n");
for(int i=0;i<n;i++)
 scanf("%d",&arr[i]);

int is_palindrome=1;

for(int i=0;i< n/2;i++)
{
	if(arr[i] != arr[n-i-1]){
		is_palindrome=0;
		break;
	}
}

if(is_palindrome)
 printf("Array is palindrome\n");
else
 printf("Not palindrome\n");

return 0; 
}
