//WAP TO ENTER PTR AND CALCULATE COMPOUND INTEREST ...

#include<stdio.h>
int main(){
	int p,t,r,ci,n;
	printf("enter the value of p:");
	scanf("%d",&p);
	printf("enter the value of t:");
	scanf("%d",&t);
	printf("enter the value of r:");
	scanf("%d",&r);
	printf("enter the value of n:");
	scanf("%d",&n);
	
	ci=p*(1+r/n)*n*t;
	printf("total ci:%d",ci);
	return 0;
	
	
	
	
	
}
