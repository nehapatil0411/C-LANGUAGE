#include<stdio.h>
#include<conio.h>
void main()
{
	int English, Maths, Science;
	float Averagemarks,per;
	printf("Enter English Marks: ");
	scanf("%d",&English); 
	printf("Enter Maths Marks: ");
	scanf("%d",&Maths);
	printf("Enter Science Marks: ");
	scanf("%d",&Science);
	
	Averagemarks=English+Maths+Science;
	per = Averagemarks*100/300;
	printf("%f",per);
	
	
	
}
