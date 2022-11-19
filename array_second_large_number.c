#include<stdio.h>
int main(){
	int a[5],i,greatest,seclarge,j;
	for(i=1;i<=5;i++){
		printf("enter the values:");
		scanf("%d",&a[i]);
	}
	for(i=1;i<=5;i++){
		printf("\nyour values:%d",a[i]);
	}
	greatest=a[0];
    for(i=1;i<=5;i++){
    	if(a[i]>greatest){
    		greatest=a[i];
    		j=i;
		}
	}
	for(i=1;i<=5;i++){
		if(i==j){
			i++; // this line ignoring the largest element...
			i--;
		}
		else if(seclarge<a[i]){
			seclarge=a[i];
		}
	}
	printf("\n\nsecond large number:%d",seclarge);
	
}
