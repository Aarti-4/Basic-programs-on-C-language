#include<stdio.h>
#include<string.h>
int main(){
	char a[200];
	int count1=0,count2=0,count3=0,i;
	printf("enter the string:");
	gets(a);
	for(i=0;i<strlen(a);i++){
		if(a[i]>='a'&&a[i]<='z'){
		count1++;
	}
	
	else if(a[i]>='0'&&a[i]<='9'){
		count2++;
	}
	else {
		count3++;
	}
}
	printf("number of alphabets:%d\n",count1);
	printf("number of digits:%d\n",count2);
	printf("number of symbols:%d\n",count3);
}
