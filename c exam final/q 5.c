#include<stdio.h>
#include<conio.h>
void main()
{
	//program for pattern using nested loop//
	char i,j;
	int k;
	for(i='A';i<='E';i++)
	{
		for(k=4;k>=1;k--)//space
		{
			printf(" ");	
		}
			for(j=i;j>='A';j--)
			{
				printf("%c ",j);	
			}
			printf("\n");
		
	}
	
}
