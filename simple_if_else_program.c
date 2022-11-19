#include<stdio.h>
int main(){
	int eng,hindi,maths,sst,science,total;
	printf("enter eng number:");
	scanf("%d",&eng);
	printf("enter hindi number:");
	scanf("%d",&hindi);
	printf("enter maths number:");
	scanf("%d",&maths);
	printf("enter sst number:");
	scanf("%d",&sst);
	printf("enter science number:");
	scanf("%d",&science);
	total=eng+hindi+maths+sst+science;
	printf("total:%d",total);
	int avg=total/5;
	if(avg>=90&&avg<=100){
		printf("you scored A+");
	}
	else if(avg>=80&&avg<=89){
		printf("you scored B");
	}
    else if(avg>=70&&avg<=79){
    	printf("you scored C");
	}
    else if(avg>=60&&avg<=69){
	    printf("you scored D");
   }
    else if(avg>=50&&avg<=59){
    	printf("you scored E");
	}
    else {
    	printf("you are failed");
	}
    return 0;
 }

