
#include<stdio.h>
int main(){
	int i,n,count=0;
	printf("enter the value of i:");
	scanf("%d",&i);
	for(n=i;i>0;i/=10){
		count++;
	}
printf("%d",count);
}


