#include<stdio.h>
#include<string.h>
void main()
{
	
	char s1[10],s2[10],s3[10];
	printf("enter the string: ");
	scanf("%s%s%s\t",&s1,&s2,&s3);
	
	strcat(s1,s2);
	strcat(s1,s3);
	printf("result cat=%s",s1);
	
	
}
