#include<stdio.h>
int main()

{
	
	int marks;
printf("enter the marks:");
	scanf("%d",&marks);
	
	if(marks>=30 && marks<100) {

	printf("pass \n");
}
	else if(marks>=0 && marks<30) {
	
		printf("fail \n");
		
 }
 
 else{
 	printf("wrong input");
 }
	return 0;
	
	
}
