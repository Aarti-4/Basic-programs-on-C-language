#include<stdio.h>
int main(){
	int amount,note500,note100,note50,note5,note2,note1;
	printf("enter the amount :");
	scanf("%d",&amount);
	note500=note100=note50=note5=note2=note1=0;
	if(amount>=500){
		note500=amount/500;
		amount-=note500/500;
		printf("the amount of note 500 is %d",amount);
	}
    else if(amount>=100){
    	note100=amount/100;
    	amount-=note100/100;
    	printf("the amount of note 100 is %d",amount);
    }
    else if(amount>=50){
       note50=amount/50;
       amount-=note50/50;
       printf("the amount of 50 note is %d",amount);
    }
    else if(amount>=5){
    	note5=amount/5;
    	amount-=note5/5;
    	printf("the amount of 5 note is %d",amount);
	}
   else if(amount>=2){
   	note2=amount/2;
   	amount-=amount/2;
   printf("the amount of 2 note is %d",amount);
   }
else if(amount>=1){
	note1=1;
	printf("the amount of 1 note is %d",amount);
}

printf("\nthe note of 500:%d",note500);
printf("\nthe note of 100:%d",note100);
printf("\nthe note of 50:%d",note50);
printf("\nthe note of 2 is%d",note2);
printf("\nthe note of 1 is%d",note1);
return 0;


}
