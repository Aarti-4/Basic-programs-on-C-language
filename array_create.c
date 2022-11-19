#include<stdio.h>
int main(){
	int a[15],i;
	for(i=0;i<=6;i++){
		printf("enter the value:");
		scanf("%d",&a[i]);
	}
	for(i=0;i<=6;i++){
		printf("the elmnt in the array is:%d\n",a[i]);
	}
}
