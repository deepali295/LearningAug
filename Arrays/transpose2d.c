#include<stdio.h>

int main()
{
int row,col;

printf("Enter no of rows: \n");
scanf("%d",&row);

printf("ENter no of cols: \n");
scanf("%d",&col);

int matrix[row][col];
int transpose[col][row];

printf("Enter elements of matrix\n");
for(int i=0;i<row;i++)
{	
	for(int j=0;j<col;j++)
	{
	 printf("Element ar [%d][%d] = \n",i,j);
	 scanf("%d",&matrix[i][j]);
	}
}

for(int i=0;i<row;i++)
{
	for(int j=0;j<col;j++)
	{
	transpose[j][i]=matrix[i][j];
	}
}

printf("Original matrix: \n");
for(int i=0;i<row;i++)
{
	for(int j=0;j<col;j++)
	{
	printf("%d ",matrix[i][j]);
	}
printf("\n");
}
printf("Transpose  matrix: \n");
 for(int i=0;i<col;i++)
 {
     for(int j=0;j<row;j++)
     {
     printf("%d ",transpose[i][j]);
     }
 printf("\n");
}

return 0;
}
	

