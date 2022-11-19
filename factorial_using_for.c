
#include<stdio.h>
int main(){
	int i=1,n,fact=1;
	printf("enter the value of  n:");
	scanf("%d",&n);
	while(i<=n){
		fact*=i;
	  i++;
	}
 printf("output:%d",fact);
}
