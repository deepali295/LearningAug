#include<stdio.h>
#include<stdlib.h>

int main()
{
	double student_score;
	printf("Enter student score: \n");
	scanf("%lf",&student_score);

	char grade;
	printf("Enter student grade: \n");
	scanf(" %c",&grade);

	printf("Your score is %.2f and Grade is %c\n",student_score,grade);

return 0;	
}
