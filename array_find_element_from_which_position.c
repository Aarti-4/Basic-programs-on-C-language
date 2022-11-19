#include<stdio.h>
int main(){
	int i,num,tosearch,found,a[100];
	printf("enter input:");
	scanf("%d",&num);
	for(i=0;i<=num;i++){
		printf("enter the value:");
		scanf("%d",&a[i]);
	}
  printf("enter the element to found in the array:");
  scanf("%d",&tosearch);
found=0;
for(i=0;i<=num;i++){
	if(a[i]==tosearch){
		found=1;
		break;
	}
}
if(found==1){
	printf("position of element %d is:%d",tosearch,i+1);
}
else{
	printf(" elemnt not found");
}


}
