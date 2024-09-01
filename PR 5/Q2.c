#include<stdio.h>
#include<conio.h>
void main()
{
	int r,c,i,j;
	
	printf("Enter the array's row size :");
	scanf("%d",&r);
	printf("Enter the array's column size :");
	scanf("%d",&c);
	
	int p[r][c];
	int maximum;
	
	printf("Enter array's element ");
	printf("\n");
	
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			printf("Enter a[%d][%d] :",i,j);
			scanf("%d",&p[i][j]);
		}
		printf("\n");
	}
	
	maximum=p[0][0];
	
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
		 	if(p[i][j]>maximum)
		 	{
		 		maximum=p[i][j];
			}
		}
		printf("\n");
	}	
	printf("The largest element is :%d",maximum);	
}
