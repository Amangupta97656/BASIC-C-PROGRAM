#include<stdio.h>
void interchange(int *number1,int *number2);
int main()

{
	int num1=50,num2=30;
	interchange(&num1,&num2);
	printf("\nthe value of after interchange: ");
	printf("\nnumber 1:%d",num1);
	printf("\nnumber 2:%d",num2);
	return 0;
}

void interchange(int *number1,int *number2)


{
	int temp;
	temp=*number1;
	*number1=*number2;
	*number2=temp;
}
