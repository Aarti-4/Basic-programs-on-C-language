//WAP TO ENTER VALUES AND PRINT TOTAL MARKS AND GIVE CONDITION IT IS VALID OR NOT...

#include<stdio.h>
int main(){
	int a,b,c,d,e,sum;
	printf("enter the value a:");
	scanf("%d",&a);
	printf("enter the value b:");
	scanf("%d",&b);
	printf("enter the value c:");
	scanf("%d",&c);
	printf("enter the value d:");
	scanf("%d",&d);
	printf("enter the value e:");
	scanf("%d",&e);
    sum =a+b+c+d+e;
	printf("sum :%d\n");
	if(sum>=400&&sum<=500){
	 printf("remarks :A+");
	}
    else  if(sum>=80&&sum<=89) {
    	printf("remarks :A");
	}	
    return 0;
}




