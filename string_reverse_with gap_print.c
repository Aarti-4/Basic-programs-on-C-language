#include<stdio.h>
#include<string.h>
int main(){
	char a[200];
	int i;
	printf("enter the string:");
	gets(a);
	for(i=strlen(a);i>=0;i--){
		if(a[i]==a[i]){
			printf("%c  ",a[i]);
	}
}
}
	


//#include<stdio.h>
//#include<string.h>
//int main(){
//	char a[200] ;
//	int i,freq[100],j;
//	printf("enter the string:");
//	gets(a);
//	
//	for(i=0;i<strlen(a);i++){
//		int count=1;
//		freq[i]=-1;
//		for(j=i+1;j<strlen(a);j++){
//		if(a[i]==a[j]){
//			count++;
//			freq[j]=0;
//		}
//	  }
//	if(freq[i]!=0){
//		freq[i]=count;
//	}
//	for(i=0;i<strlen(a);i++){
//		if(freq[i]!=0){
//			printf(" %c occurs %d times\n",a[i],count);
//		}
//	}
//	}
//	
//}
