//#include<stdio.h>
//int main(){
//	char a[200];
//	int i;
//	printf("enter the string:");
//	gets(a);
//	for(i=0;i<strlen(a);i++){
//		if(a[i]==a[i]){
//			printf("%c   ",a[i]);
//					}
//	}
//}


#include<stdio.h>
int main(){
	char a[100];
	int i;
	printf("enter the string:");
	gets(a);
	for(i=0;i<strlen(a);i++){
		if(a[i]==a[i]){
			printf("%c   ",a[i]);
		}
	}
}
