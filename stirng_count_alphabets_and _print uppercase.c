#include<stdio.h>
#include<string.h>
int main(){
	
	char name[100];
	printf("enter the name:");
	gets(name);
	int ct=strlen(name);
	printf("Number of charcater: %d",ct);
		printf("\nUpper case: %s",strupr(name));
	
}
