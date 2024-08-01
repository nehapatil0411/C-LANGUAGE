#include<stdio.h>
#include<conio.h>
void main()
{
	int i=1,n;
	int first=0;
	int second=1;
	int ans=first+second;
	printf("Enter n :");
	scanf("%d",&n);
	printf("0,1,");
	
	for(i=3;i<=8;i++)
	{
		printf("%d ",ans);
		first=second;
		second=ans;
		ans=first+second;
	}
}
