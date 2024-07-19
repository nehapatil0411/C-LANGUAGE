#include<stdio.h>
#include<conio.h>
void main()
{
	int score;
	char grade;
	
	printf("enter your score");
	scanf("%d",&score);
	
	//? : 

	(score>=90&&score<=100)
	?
		printf("your grade is A\n")
	:
    (score>=80&&score<90)	
		?
		printf("Your grade is B\n")	
		:
	(score>=70&&score<80)
		?
		printf("Your grade is C\n")
		:
	(score>=60&&score<70)
		?
		printf("Your grade is D\n")
		:
	(score>=0&&score<60)
		?
		printf("Your grade is F\n"):printf("Enter valid input");
		
		
		printf("enter your grade : ");
		scanf("%s",&grade);	
					
		
				
	switch (grade)
		{
			case'a':printf("Excellent work !");
			break;
			case'b':printf("Well done !");
			break;
			case'c':printf("Good job !");
			break;
			case'd':printf("You passed,but you could do better !");
			break;
			case'e':printf("Sorry,you failed !");
			break;
		}
		
		if(grade=='a')
			{
				printf("Congratulations! You are eligible for the next level");
			}
		else
		{
			if(grade=='b')
			{
				printf("Congratulations! You are eligible for the next level");
			}
			else
			{
				if(grade=='c')
				{
					printf("Congratulations! You are eligible for the next level");
				}
				else
				{
					if(grade=='d')
					{
						printf("Congratulations! You are eligible for the next level");
					}
					else
					{
						if(grade=='f')
						{
							printf("Please try again next time");
						}
					}
				}
			}
		}
		
    
    
	
	
		
}

