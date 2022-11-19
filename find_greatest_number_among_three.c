//WAP FIND LARGEST NUMBER IN THREE DIFFERNET NUMBERS...

#include<stdio.h>
int main(){
	int n1,n2,n3;
	printf("enter three different numbres:");
	scanf("%d %d %d",&n1,&n2,&n3);
	
	if(n1>=n2&&n1>=n3){
		printf("Largest number is n1:%d",n1);
	}
   else if(n2>=n1&&n2>=n3){
   	printf("largest number is n2:%d",n2);
   }
   else if(n3>=n1&&n3>=n2){
   	printf("largest number is:%d",n3);
   }
  else {
  	printf("it is invalid input");
  }
 return 0;
}
