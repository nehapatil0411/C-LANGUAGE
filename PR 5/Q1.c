#include<stdio.h>
#include<conio.h>
void main()
{
	int j,n;
	
	printf("Enter size of array :");
	scanf("%d",&n);
	
	int p[n];
	for(j=0; j<n; j++)
	{
		printf("Enter a[%d] : ",j);
		scanf("%d",&p[j]);	
	}
	printf("\n");
	for(j=0; j<n; j++)
	{
	 	if(p[j]<0)
		{
			printf("%d  ",p[j]);	
		}
	}
	
	
	
	
}
