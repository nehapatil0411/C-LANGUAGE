#include<stdio.h>
#include<conio.h>
void main()
{
	
	int n;
 
    printf("enter your age : ");
    scanf("%d",&n);
    
    if(n>18)
    {
    	printf("you are eligible for vote");
	}
	else
    {
    	printf("you are not eligible for vote");
	}
}