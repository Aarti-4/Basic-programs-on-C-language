#include<stdio.h>
int main(){
	 char a[20];
	 int count=1,i;
	printf("enter the string:");
	gets(a);
	for(i=0;i<=strlen(a);i++){
		if(a[i]==' '){
		count++;
		}
	}
	printf(" number of words :%d",count);
}


