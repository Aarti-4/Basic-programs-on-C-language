#include<stdio.h>
int main(){
	int i,n1,n2,lcm,gcd;
	printf("enter the value of n1 :");
	scanf("%d",&n1);
	printf("enter the value of n2:");
	scanf("%d",&n2);
	for(i=1;i<=n1&&i<=n2;i++){
		if(n1%i==0&&n2%i==0)gcd=i;
	}
	lcm=(n1*n2)/gcd;
	printf("lCM of %d and %d is :%d",n1,n2,lcm);
	
}
