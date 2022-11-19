#include<stdio.h>
int main(){
	int i,count=0;
	printf("enter the value of i:");
	scanf("%d",&i);
	do{
		i/=10;
        count++;
	}
    while(i!=0);
    	printf("output:%d",count);
	   

}
