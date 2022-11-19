#include<stdio.h>
int main(){
	int a[10],i,sum=0,greater;
	for(i=0;i<5;i++){
	printf("enter the values:");
	scanf("%d",&a[i]);
    }
    greater=a[0];
    for(i=0;i<5;i++){
    	if(a[i]>greater){
    		greater=a[i];
		}
	}
		printf("\n\ngreatest elmnt :%d",greater);
	}
    
