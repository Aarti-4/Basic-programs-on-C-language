#include<stdio.h>
int main(){
	int i,j,add[i][j];
   int 	a[2][3]={{1,2,3},{4,5,6}};
	int a1[2][3]={{2,3,4},{4,5,6}};
	for(i=0;i<2;i++){
		for(j=0;j<3;j++){
			printf("%d   ",a[i][j]);
		}
		printf("\n");
	}
		printf("\n\n");
	for(i=0;i<2;i++){
		for(j=0;j<3;j++){
			printf("%d   ",a1[i][j]);
		}
			printf("\n");
	}
	printf("\n\n");
	for(i=0;i<2;i++){
		for(j=0;j<3;j++){
			add[i][j]=a[i][j]+a1[i][j];
			printf("%d   ",add[i][j]);
		}
			printf("\n");
	}
			
}
