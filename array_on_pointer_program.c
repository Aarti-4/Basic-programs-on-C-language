#include<stdio.h>
int main(){
	int a[10],i,*q;
	
	for(i=0;i<4;i++){
	   printf("enter the elemnts:");
		scanf("%d",&a[i]);
	}
		q=a;// q is also a variable it store the elemnts of a variable and print it
		    //.so array of a elemnts also printed with q variable.
		for(i=0;i<4;i++){
			printf("\n%d",*(q+i));
		}
	}

