#include<stdio.h>
int main(){
	int i,num;
	printf("enter the num:");
	scanf("%d",&num);
	printf("factor of %d are: ",num);
	
	for(i=1;i<=num;i++){
		if(num%i==0){
			printf("%d , ",i);
		}
	}

}
