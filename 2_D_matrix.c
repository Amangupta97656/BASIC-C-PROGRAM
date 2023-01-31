#include<stdio.h>
int main()

{
	int rowcount,columncount,i,j;
	
	int firstmatrix[10][10],secondmatrix[10][10],resultmatrix[10][10];
	
	printf("enter the number of rows: ");
	scanf("%d",&rowcount);
	
	printf("enter the number of columns: ");
	scanf("%d",&columncount);
	 printf("element of first matrix: \n");
	 for(i=0;i<rowcount;i++)
	 for(j=0;j<columncount;j++)
	 scanf("%d",&firstmatrix[i][j]);
	 printf("element of second matrix: \n");
	 for(i=0;i<rowcount;i++)
	 for(j=0;j<columncount;j++)
	 scanf("%d",&secondmatrix[i][j]);
	 
	 printf("sum of entered matrice: \n");
	 for(i=0;i<rowcount;i++)
	 {
	 	for(j=0;j<columncount;j++)
	 	
	 	{
	 		resultmatrix[i][j]=firstmatrix[i][j]+secondmatrix[i][j];
	 		printf("%d\t",resultmatrix[i][j]);
		 }
		 printf("\n");
		 
	 }
	return 0;
	
	}
