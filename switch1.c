//WAP YOU ENTERED ANY OPERATOR AND PERFORM FUNCTION USING SWITCH CONDITION...

#include<stdio.h>
int main(){
	char operatorr;
	printf("choose :+,-,/,*,%\n");
	printf("enter the operator:");
	scanf("%c",&operatorr);
	
	int a,b,c; 
	printf("enter the value of a and b:");
	scanf("%d %d",&a,&b);
	switch(operatorr){
		case '+':
		c=a+b;
	    printf("output of c addition is:%d",c);
	    break;	
	
        case '-':
        c=a-b;
        printf("ouput of c subtraction is :%d",c);
        break;

        case '*':
       	c=a*b;
       	printf("output of c multiplication is :%d",c);
       	break;

        case '/':
   	    c=a/b;
   	    printf("output of c division is :%d",c);
   	    break;
   	
   	    case '%':
   		c=a%b;
   		printf("output of c modulus is :%d",c);	
        break;
         
        default :
        printf("invalid oparator");
        break;
		}
         return 0;
}
