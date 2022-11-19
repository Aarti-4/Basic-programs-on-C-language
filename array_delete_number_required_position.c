#include<stdio.h>
int main(){
	int i,num,a[100],pos;
	printf("enter the size of array:");
	scanf("%d",&num);
	for(i=0;i<num;i++){
		printf("enter the values:");
		scanf("%d",&a[i]);
	}
	printf("enter the psition u want to delete:");
	scanf("%d",&pos);
	if(pos>num){
		printf("invalid positon.");
	}
	else{
		for(i=pos-1;i<num;i++){
			a[i]=a[i+1];
		}
	}
 for(i=0;i<num;i++){
 	printf("%d\t",a[i]);
 }

	}
	
	
	

