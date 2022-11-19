#include<stdio.h>
int main(){
	int i,j,count=0,num,t=1;
	printf("enter the num:");
	scanf("%d",&num);
	for(i=1;i<=num;i++){
		for(j=1;j<=i;j++){
			printf("%d",t);
			count++;
	}
		printf("  +  ");
	}
	printf("\nTotal:%d",count);
}
