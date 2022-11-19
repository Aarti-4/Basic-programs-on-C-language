#include<stdio.h>
int main(){
	int i,sum=0,num;
	printf("enter number:");
	scanf("%d",&num);
	for(i=1;i<=num;i++){
		if(num%i==0){
			printf("%d ,\n",i);
		}
	   sum=sum+i;
	}
	printf("sum:%d\n",sum);
	if(sum==num){
		printf("so the number is perfect number.");
	}
	else{
		printf("it is not perfect number.");
	}
	
	
}
