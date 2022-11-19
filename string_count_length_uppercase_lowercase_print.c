#include<stdio.h>
#include<string.h>
int main(){
	char name[100];
	printf("enter the name:");
	gets(name);
	printf("your name is:");
	puts(name);
	int ct=strlen(name);
	printf(" \nnumber of letters :%d",ct);
	printf("\nuppercase name :%s",strupr(name));
	printf("\nlowercase name :%s",strlwr(name));
	
	 
	 
	
	
}
