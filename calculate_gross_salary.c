//WAP TO INPUT BASIC SALARY OF AN EMPLOYEE AND CALCULATE ITS GROSS SALARY ACC.TO GIVEN CONDITIONS.. 

#include<stdio.h>
int main(){
  int  basic_salary,HRA,DA,gross_salary;
  printf("enter basic_salary:");
  scanf("%d",&basic_salary);
  if(basic_salary <=10000){
  	HRA=basic_salary+20;
	DA=basic_salary+80;
 }
 else if(basic_salary <=20000){
 	HRA=basic_salary+25;
	DA=basic_salary+90;

 }
 else if(basic_salary>20000){
 	HRA=basic_salary+30;
 	DA=basic_salary+95;
	
 }
 else {
	printf("invalid input");
}
gross_salary=basic_salary+HRA+DA;
printf("gross salary:%d",gross_salary);
return 0;


}

