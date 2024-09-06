#include<stdio.h>
void main()
{
	int i,j;
    char choice;
	

	printf("enter your choice:");
	scanf("%c",&choice);
	
	printf("enter i :");
	scanf("%d",&i);
	printf("enter j :");
	scanf("%d",&j);
	
	switch(choice)
	{
		case '+': printf("sum of %d and %d is %d",i,j,i+j);
		break;
		case '-': printf("substraction of %d and %d is %d",i,j,i-j);
		break;
		case '*': printf("multiplication  of %d and %d is %d",i,j,i*j);
		break;
		case '/': printf("division of %d and %d is %d",i,j,i/j);
		break;
		case '%': printf("module of %d and %d is %d",i,j,i%j);
		break;
		
	}
	
}
