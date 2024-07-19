#include<stdio.h>
#include<conio.h>
void main()
{
	int n, p=1;
	
	printf("enter n : ");
	scanf("%d",&n);
	while(p<=n)
	{
		if(n%2==1)
		{
			printf("%d ",n);
		}
		
		n--;
	}
	
	
}
