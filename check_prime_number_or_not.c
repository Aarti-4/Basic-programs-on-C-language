#include<stdio.h>
int main(){
	int i,num,a[100],temp=0;
	printf("enter the value:");
	scanf("%d",&num);
	for(i=2;i<num;i++){
		if(num%i==0){
			temp=1;
			break;
		}
		else{
			temp=0;
		}
	}
	if(temp==1){
		printf("it is not prime number.");
	}
    else{
    	printf("it is prime number.");
	} 
}
