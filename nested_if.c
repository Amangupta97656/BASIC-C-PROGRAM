//find the smallest of three numbers
#include<stdio.h>
#include<conio.h>

void main()

{
	int x,y,z;
	printf("enter the number: ");
	scanf("%d%d%d",&x,&y,&z);
	printf("the smallest number: ");
	if(x<y)
	{
		if(x<y){
			if(x<y)
			printf("%d",x);
			else
			printf("%d",y);
		}
		else
		{
			if(z<y)
			printf("%d",z);
			else
			printf("%d",y);
		}
	} 
	
}
