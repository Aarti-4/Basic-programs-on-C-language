#include<stdio.h>
int main(){
	int a[10],i,sum=0;
	for(i=0;i<5;i++){
	printf("enter the values:");
	scanf("%d",&a[i]);
    }
    printf("Your array :");
	for(i=0;i<5;i++){
    	printf("%d\t",a[i]);
    	sum=sum+a[i];
	}
	printf("\ntotal :%d",sum);
}
