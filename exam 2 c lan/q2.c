#include<stdio.h>
void main()
{
	int r,c,i,j,max=0;
	
	printf("enter row : ");
	scanf("%d",&r);
	printf("enter column : ");
	scanf("%d",&c);
	
	int a[i][j];
	for(i=0;i<r;i++)
	{
	    for(j=0;j<c;j++)
		{
			if(a[i][j]>max)
	     	{
		 	max=a[i][j];
		    }
			scanf("%d",&a[i][j]);	
		}
		max=a[i][j];
		

    printf("maximumn element is %d",a[i][j]);
}
}
