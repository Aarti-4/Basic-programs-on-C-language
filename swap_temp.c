//WAP OF TWO NUMBERS WITH TAKING TEMP VARIABLE...

#include<stdio.h>
int main(){
	int a=17,b=20,temp;
	
	temp=a;
	a=b;
	b=temp;
	printf("the value of a is : %d\n",a);
    printf("the value of b is : %d",b);
    return 0;
}
