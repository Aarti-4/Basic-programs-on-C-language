#include<stdio.h>
int main(){
	int i,a[10],j,k;
	for(i=0;i<5;i++){
		printf("enter values:");
		scanf("%d",&a[i]);
	}
	 printf("even elmnts are:");
	 for(i=0;i<5;i++){
	 	if(a[i]%2==0){
	 	  a[j]=a[i];
	 	  j++;
		 }
		 
		else {
	 	a[k]=a[i];
	 	k++;
	 }
    }
	printf("\n even elemnts are:");
	for(i=0;i<j;i++){
		printf("%d\t",a[j]);
	}
	printf("\n odd elemnts are:");
	for(i=0;i<k;i++){
		printf("%d\t",a[k]);
	}
	
}
