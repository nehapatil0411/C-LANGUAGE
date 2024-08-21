#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n,sum,average;
	
	printf("enter n:");
	scanf("%d",&n);
	
	int a[n];
	for(i=0; i<n; i++)
	
	
	{
		printf("enter a[%d]:",i);
		scanf("%d",&a[i]);
	}
	for(i=0; i<n; i++)
	{
		sum=sum+i;
		average=sum+i/n;
    }
    printf("average of array %d",average);
}
