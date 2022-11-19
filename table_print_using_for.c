#include<stdio.h>
int main(){
	int i,num,data;
	printf("enter the table :");
	scanf("%d",&num);
	for(i=1;i<=10;i++){
		data=num*i;
	  printf("%d*%d=%d\n",num,i,data);
	}
}
