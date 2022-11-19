//WAR TO CONVERT C TO F AND F TO C...
#include<stdio.h>
int main(){
	char ch;
	printf("enter 'C' for convert celsius to farahient enter 'F' for convert farahient to celsius\n.");
	printf("enter the choice:");
	scanf("%c",&ch);
	
	if(ch=='C'){
	 int num;
	 printf("enter the value of f");
	 scanf("%d",&num);
	 int c=(num-32)/1.8;
	 printf("output c :%d",c);
    }
	 else if(ch=='F'){
	 	int num;
	 	printf("enter the value of c");
	 	scanf("%d",&num);
	 	int f=(num*1.8)+32;
	 	printf("output f :%d",f);
	 	
	 }
	return 0;	
	
}
