#include<stdio.h>
int main(){
	int i,j,temp,num,a[100];
	printf("enter the range:");
	scanf("%d",&num);
	for(i=0;i<num;i++){
		printf("enter value:");
		scanf("%d",&a[i]);
	}
   for(i=0;i<num;i++){
   	for(j=i+1;j<num;j++){
   		if(a[i]<a[j]){
   			temp=a[i];
   			a[i]=a[j];
   			a[j]=temp;
		   }
	   }
   }

 printf("descending order output:");
 for(i=0;i<num;i++){
 	printf("%d\t",a[i]);
 }

}
