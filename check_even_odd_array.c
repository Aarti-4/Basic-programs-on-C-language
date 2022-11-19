#include<stdio.h>
int main(){
	int i,a[10],j,k;
	for(i=0;i<5;i++){
		printf("enter values:");
		scanf("%d",&a[i]);
	}
	 
	 for(i=0;i<5;i++){
	 	if(a[i]%2==0){
	 	  	printf("\n even elemnts are:%d",a[i]);
	 }
    else{
    	printf("\n \n\nodd elemnts are:%d",a[i]);
	}

	
}
}
