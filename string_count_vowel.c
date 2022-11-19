#include<stdio.h>
#include<string.h>
int main(){
	char a[100];
	printf("enter the name:");
	gets(a);
	int i,count=0;
    int len=strlen(a);
	for(i=0;i<len;i++){
		if (a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u')
		{
			count++;
		}
	
	}
	printf("vowel count: %d",count);
	
		
	
}
