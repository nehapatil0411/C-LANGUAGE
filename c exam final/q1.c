#include<stdio.h>
#include<conio.h> 
int swap()
{

	// c program to swap 2 numbers using user defined function//
	int a,b;
	printf("enter a :");
	scanf("%d",&a);
	printf("enter b :");
	scanf("%d",&b);
	
	a=a+b;
	b=a-b;
	a=a-b;
	printf("a is %d",a);
	printf("b is %d",b);
	

	return 0;
}
int main()
{
	swap();
}


