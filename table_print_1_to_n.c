#include<stdio.h>
int main(){
	int i,j ,n;
	printf("enter the last value:");
	scanf("%d",&n);
	for(i=1;i<=10;i++){
		for(j=1;j<=n;j++){
			printf("%d * %d = %d\n",i,j,i*j);
		}
		printf("\n");
	}
}
