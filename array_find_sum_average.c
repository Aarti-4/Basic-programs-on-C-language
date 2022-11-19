//WAP TAKE INPUT FROM USER FIND AVERAGE USING ARRAY..

#include<stdio.h>
int main(){
	int a[10],i,sum=0,avg;
	for(i=1;i<=6;i++){
		printf("please enter the numbers:");
		scanf("%d",&a[i]);	
		}
   for(i=1;i<=6;i++){
   	sum=sum+a[i];
   }
  printf("total sum is :%d\n",sum);
 avg=sum/6;
 printf("total avg is :%d",avg);

}


