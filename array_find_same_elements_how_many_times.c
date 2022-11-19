#include<stdio.h>
int main(){
int i,arr[100],j,count,freq[100],num;
printf("Enter the size of array: ");
scanf("%d",&num);
for(i=0;i<num;i++){
	printf("enter the elements:");
	scanf("%d",&arr[i]);
   freq[i]=-1;
}
   for(i=0;i<num;i++){
   	count=1;
   	for(j=i+1;j<num;j++){
   		if(arr[i]==arr[j]){
   			count++;
   			freq[j]=0;
		   }
	   }
  if(freq[i]!=0){
	freq[i]=count;
}
}
  for(i=0;i<num;i++){
  	if(freq[i]!=0){
  		printf("%d occurs %d times\n",arr[i],freq[i]);
	  }
  } 
}
   
   






