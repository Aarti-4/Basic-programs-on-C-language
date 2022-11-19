#include<stdio.h>
int main(){
	int i=10,num,data;
	printf("enter the num:");
	scanf("%d",&num);
	while(i>=1){
		data=num*i;
		printf("%d*%d=%d\n",num,i,data);
		i--;
	}
}
