#include<stdio.h>
int main(){
	int i,j,k,sum;
	int a[3][3]={{1,2,4},{3,4,4},{4,6,3}};
	int a1[3][3]={{5,6,7},{7,8,8},{9,7,2}};
	int a2[3][3];
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			sum=0;
			for(k=0;k<3;k++){
			sum=sum+a[i][k]*a1[k][j];	
			}
			a2[i][j]=sum;
		}
	}
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
	      printf("%d   ",a2[i][j]);
		}
		printf("\n");
	}
}
