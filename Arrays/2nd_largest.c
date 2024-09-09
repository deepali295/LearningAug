#include<stdio.h>

int main()
{
int n;
printf("Enter size:\n");
scanf("%d",&n);

int arr[n];
printf("Enter elements:\n");
for(int i=0;i<n;i++)
 scanf("%d",&arr[i]);

int largest,second_largest;

if(arr[0]>arr[1]){
	largest=arr[0];
	second_largest=arr[1];
} else{
	second_largest=arr[0];
	largest=arr[1];
}

for(int i=2;i<n;i++){
if(arr[i]>largest){
second_largest=largest;
largest=arr[i];
}
else if(arr[i]>second_largest && arr[i] != largest){
second_largest=arr[i];
}
}

printf("The second largest element is %d\n",second_largest);

return 0;
}

