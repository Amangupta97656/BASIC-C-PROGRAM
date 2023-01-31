#include<stdio.h>
#include<conio.h>

void main()

{
	char name[20];
	int rollno;
	float sub1,sub2,sub3,sub4,sum,score;
	printf("enter the name of student: ");
	scanf("%s", &name);
	printf("\n enter roll number: ");
	scanf("%d", &rollno);
	printf("enter marks in 4 subject: \n");
	
	scanf("%f%f%f%f", &sub1,&sub2,&sub3,&sub4);
	
	sum = sub1 + sub2 + sub3 + sub4;
	score = (sum/400)*100;
	
	printf("\n name of student : %s" , name);
	printf("\n roll number : %d" , rollno);
	printf("\npercentage score secured : %f" ,score);
	
	getch();
	
}
