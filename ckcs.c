#include<stdio.h>

int main()
{
	int n;
	printf("enter the number: ");
	scanf("%d", &n); 
	
	if(n%2==0)
	{
		printf("The number is even\n");
		
	}
	else
	{
		printf("ODD");
	}
	return 0;
}
