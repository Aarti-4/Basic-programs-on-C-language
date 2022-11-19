#include<stdio.h>
int main(){
	int i,temp,sum=0;
	printf("enter the value of i:");
	scanf("%d",&i);
	temp=i;
	while(i!=0){
		sum=(sum*10)+(i%10);
		i=i/10;
	}
	if(sum==temp){
		printf("it is panildrome number.");
	}
else{
	printf("it is not panildrome number.");
}
}


















