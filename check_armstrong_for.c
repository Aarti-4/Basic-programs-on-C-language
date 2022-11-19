#include<stdio.h>
int main(){
	int i,n,r,sum=0,a;
	printf("enter the value of i:");
	scanf("%d",&i);
	a=i;
	for(n=i;n!=0; n=n/10){
		r=n%10;
	   sum=sum+r*r*r;
       
	}
  if(a==sum){
  	printf("it is armstrong number.");
  }	
   else{
   	printf("it is not armstrong number.");
   }

}
