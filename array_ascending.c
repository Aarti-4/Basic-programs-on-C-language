#include<stdio.h>
int main(){
	int a[10],i,j,temp,size;
	printf("enter the size :");
	scanf("%d",&size);
	for(i=0;i<size;i++){
		printf("enter the values:");
		scanf("%d",&a[i]);
	}
	for(i=0;i<size;i++){
		for(j=i+1;j<size;j++){
			if(a[i]>a[j]){
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	for(i=0;i<size;i++){
	printf("%d\t",a[i]);
}
}
