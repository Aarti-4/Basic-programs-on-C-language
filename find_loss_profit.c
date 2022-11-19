//WAP TO FIND SP AND CP...

#include<stdio.h>
int main(){
	int SP,CP,loss,profit;
	printf("enter the value of S.P:");
	scanf("%d",&SP);
	printf("enter the value of C.P:");
	scanf("%d",&CP);
	if(SP>CP){
		profit=SP-CP;
		printf("profit");
		
	}
	else if(SP<CP){
		loss=CP-SP;
		printf("loss");
	}
	return 0;
	
	
}
