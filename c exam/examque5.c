#include<stdio.h>
#include<conio.h>
void main()
{
	int a;
	
	printf("enter a num");
	scanf("%d",&a);
	
	int lastdigit=a%10;
	printf("lastdigit:%d\n\n",lastdigit);
	while(a>9)
	{
		a=a/10;
	}
	printf("firstdigit:%d\n\n",a);
	printf("sum of first and last digit:%d",lastdigit+a);

}