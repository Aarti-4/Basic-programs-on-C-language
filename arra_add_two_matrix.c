#include<stdio.h>
#include<conio.h>
int main()
{
	int a[2][3],b[2][3],c[2][3],i,j;
	printf("enter the value of matrix A:");
	for(i=0;i<2;i++) 
	for(j=0;j<3;j++)
	{
		scanf("%d",&a[i][j]);
	}
	printf("enter the value of matrix B:");
	for(i=0;i<2;i++)
	for(j=0;j<3;j++)
	{
		scanf("%d",&b[i][j]);
	}
	for(i=0;i<2;i++)
	for(j=0;j<3;j++)
	c[i][j]=a[i][j]+b[i][j];
	printf("the value of matrix C:");
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		printf("%d",c[i][j]);
		printf("\n");
	}
	getch();
}
