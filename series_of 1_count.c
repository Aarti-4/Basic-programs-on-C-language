#include<stdio.h>
int main(){
	int i,j,num,count=0,t=1;
	printf("enter the size :");
	scanf("%d",&num);
	for(i=1;i<=num;i++){
		for(j=1;j<=i;j++){
			printf("%d",t);
		}
		printf("   +    ");
	}
	printf("\n sum of %d series:",num);
	for(i=1;i<=num;i++){
		count=count+t;
		printf("%d",count);
	}
}
