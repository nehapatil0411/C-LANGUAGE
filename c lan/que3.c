#include<stdio.h>
#include<conio.h>
void main()
{
	int p;
	
	printf("enter a number : ");
	scanf("%d",&p);
	
	int lastdigit=p%10;
	printf("lastdigit: %d\n",lastdigit);
	while(p>9)
	{
		p=p/10;
	}
	printf("first digit: %d\n\n",p);
	printf("sum of first and last digit :%d",lastdigit+p);
}
