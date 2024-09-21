#include<stdio.h>
#include<conio.h>
void main()
{

	//program to give a grade from percentage//
	float per;
	printf("enter percentage");
	scanf("%d",&per);
	
	if(per>=90)
	{
		printf("a grade");	
	}
	else if(per>=80)
	{
			printf("b grade");
	}
	else if(per>=70)
	{
			printf("c grade");
	}
	else if(per>=60)
	{
			printf("d grade");
	}
	else if(per>=40)
	{
			printf("e grade");
	}
	else if(per>40)
	{
			printf(" grade failed");
	}
}
