#include<stdio.h>
#include<conio.h>
void main()
{
	int  r, c, i, j ;
	
	printf("Enter the array's row size : ");
	scanf("%d",&r);
	printf("Enter the array's column size : ");
	scanf("%d",&c);
	
	printf("\n");
	
	int a[r][c];
	
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			printf("Enter a[%d][%d] : ",i,j);
			scanf("%d",&a[i][j]);
		}
		printf("\n");
	}
	
		
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			printf("%d ",a[i][j]);
		 
		}
		printf("\n");
	}	
	
	
	int sumofrow , sumofcolumn;
	
 
	
	for(i=0; i<r; i++)
	{
		sumofrow = sumofcolumn =0 ;
		
		for(j=0; j<c; j++)
		{
			
			sumofrow = sumofrow + a[i][j];
			sumofcolumn = sumofcolumn + a[j][i];
		}
		printf("\nsum of row1 : %d    sum of column1 : %d ",sumofrow,sumofcolumn);
		
		printf("\n");
		
	}
	
	
}
