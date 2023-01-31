#include<stdio.h>

int main()

{
	
	
	int num1,num2;
	
	int sum,sub,mult,mod;
	
	float div;
	 
	 printf("enter any two number: ");
	 
	 scanf("%d%d", &num1,&num2);
	 
	 sum = num1 + num2;
	 sub = num1 - num2;
	 mult = num1*num2;
	 mod = num1%num2;
	 div = num1/num2;
	 
	 printf("%d\n", sum);
	 printf("%d\n", sub);
	 printf("%d\n", mult);
	 printf("%d\n", mod);
	 printf("%f\n", div);
	 
	 
	 return 0;
}
