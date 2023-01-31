#include<stdio.h>
#include<string.h>

struct student {
	int roll;
	float cgpa;
	char name[10];
};

int main()
{
	struct student s1={07,7.9,"aman"};
	struct student s2={14,8.1,"arun"};
	struct student s3={25,8.5,"deependra"};
	

	
	printf("student name=%s\n",s1.name);
	printf("student roll=%d\n",s2.roll);
	printf("student marks=%f\n",s3.cgpa);
	
	return 0; 
	
}
