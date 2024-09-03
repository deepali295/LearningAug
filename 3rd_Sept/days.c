#include<stdio.h>
#include<stdlib.h>
#define DAYS_IN_WEEK 7
int main()
{
int total_days,weeks,days;
printf("Enter total number of days: \n");
scanf("%d",&total_days);

weeks=total_days / DAYS_IN_WEEK;
days=total_days % DAYS_IN_WEEK;

printf("%d days are %d weeks,%d days\n",total_days,weeks,days);
return 0;
}

