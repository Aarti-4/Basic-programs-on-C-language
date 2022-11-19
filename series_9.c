#include<stdio.h>
int main(){
	int i,num,sum=0,t=9,j;
	printf("enter the size :");
	scanf("%d",&num);
	for(i=1;i<=num;i++){
		for(j=1;j<=i;j++){
		sum=sum+t;
		printf("%d",t);
	}
	printf("   ");
}
printf("sum=%d",sum);
}

