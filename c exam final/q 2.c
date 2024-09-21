#include<stdio.h>
#include<conio.h>
void main()
{
	//convert temperature from degree celsius to fahrenhit//
	//°F = (9/5) °C+32.
	
  int celsius, fahrenheit;
  printf("enter celsius:");
  scanf("%d",&celsius);
  
  fahrenheit=(1.8*celsius)+32;
  
  printf("fahrenheit:%d",fahrenheit);
		
	
}
