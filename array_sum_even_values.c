#include<stdio.h>
int main(){
	int i,num,sum=0,a[100];
	printf("enter the size of array:");
	scanf("%d",&num);
	for(i=0;i<num;i++){
		printf("enter the values:");
		scanf("%d",&a[i]);
	}
	for(i=0;i<num;i++){
		if(a[i]%2==0){
			printf("%d\n",a[i]);
			sum=sum+a[i];
		}
	}
printf("sum of even num:%d",sum);
}
