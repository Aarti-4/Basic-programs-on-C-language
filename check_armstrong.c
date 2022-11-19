#include<stdio.h>
int main(){
	int i,sum=0,r,temp;
	printf("enter the value of i:");
	scanf("%d",&i);
	temp=i;
	while(i>0){
		r=i%10;
		sum=sum+(r*r*r);
		i=i/10;
	}
 if(sum==temp){
 	printf("it is armstrong number.");
 }
else{
	printf("it is not armstrong number.");
}


}
