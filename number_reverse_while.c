#include<stdio.h>
int main(){
  int a,reverse=0;
    printf("enter the value of a:");
    scanf("%d",&a);
  	 while(a!=0){
  	 	reverse=(reverse*10)+(a%10);
  	 	a=a/10;
	  
   
  }
 printf("%d the reverse no is ",reverse);
}
