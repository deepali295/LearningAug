#include<stdio.h>
#define MINS_IN_HOUR 60

int main()
{
int total_mins,hours,mins;
printf("Enter time in mins: \n");
scanf("%d",&total_mins);

hours=total_mins/MINS_IN_HOUR;
mins=total_mins % MINS_IN_HOUR;

printf("%d minutes is equal to %d hour(s) and %d minutes.\n",total_mins,hours,mins);
return 0;
}
