#include<stdio.h>
int main(){
	char a[200],choice;
	int i,count=0;
	printf("enter the string:");
	gets(a);
	printf("enter the alphabet u want to count:");
	scanf("%c",&choice);
	for(i=0;i<strlen(a);i++){
		if(a[i]==choice){
			count++;
			}
		}
	printf("The frequency of %c is :%d times",choice,count);
}
