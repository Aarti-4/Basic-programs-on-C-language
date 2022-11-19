#include<stdio.h>
int main(){
	int i,j,num,flag=1;
	printf("enter the range to find the prime numbers:");
	scanf("%d",&num);
	for(i=2;i<num;i++){
		for(j=2;j<i/2;j++){
			if(i%j==0){
				flag=0;
				break;
			}
			else{
				flag=1;
			}
			
		}
	
	if(flag==1){
		printf("%d ",i);
	}
}
}
