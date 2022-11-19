#include<stdio.h>
int main(){
	int a[10],i,num,smallest;
	for(i=0;i<5;i++){
		printf("enter a value:");
		scanf("%d",&a[i]);
	}
	smallest=a[0];
	for(i=0;i<5;i++){
		if(a[i]<smallest){
			smallest=a[i];
		}
	}
		printf("smallest number is :%d",smallest);
	
	
	
}
