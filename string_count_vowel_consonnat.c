#include<stdio.h>
int main(){
	char a[100];
	printf("enter the name:");
	gets(a);
	int i,count=0,count1=0;
	for(i=0;i<strlen(a);i++){
		if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'){
			count++;
		}
		else{
			count1++;
		}
	}
	printf("Total vowel:%d\n",count);
	printf("Total consonant:%d",count1);
}
