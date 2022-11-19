#include<stdio.h>
int main(){
	char a[100];
	int i;
	printf("enter the name:");
	gets(a);
	printf("your name in reverse:");
	for(i=strlen(a);i>=0;i--){
		printf("%c",a[i]);
	}
}



