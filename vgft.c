#include<stdio.h>
#include<conio.h>
int sum(int a, int b);
int main()
{ int x;
int y;
printf("Enter x :\n");
scanf("%d",&x);
printf("Enter y:\n");
scanf("%d",&y);
printf("Sum is %d", sum(x,y));
getch();
return 0;
}

int sum(int a, int b)
{ int a, int b;
sum=(a+b);
return sum;
}
