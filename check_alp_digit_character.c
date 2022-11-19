//WAP TO INPUT ANY CHARACTER AND CHECK WHETHER IT IS ALPHABET ,DIGIT OR SPECIAL CHARCTER...

#include<stdio.h>
int main(){
	char ch;
	printf("enter the input:");
	if(ch>='a'&&ch<='z'){
		printf("it is character");
  }
    else if(ch>='0'&&ch<='9'){
    	printf("it is digit");
  }
	 else {
	 	printf("it is special character");
	 }
 return 0;	
	 
}
