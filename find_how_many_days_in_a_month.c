//WAP TO FIND TOTAL NUMBER OF DAYS IN A MONTH..

#include<stdio.h>
int main(){
	int num;
	printf("enter the value :");
	scanf("%d",&num);
    printf("you entered:%d\n",num);
    switch(num){
    	case 1:
    	printf("31 days in jan.");
    	break;
    	
		case 2:
		printf("28 days in feb.");
		break;
		
		case 3:
		printf("31 days in mar.");
		break;
		
		case 4:
		printf("30 days in apr.");
		break;
		
		case 5:
		printf("31 days in may.");
		break;
		
		case 6:
		printf("30 days in june.");
		break;
		
		case 7:
		printf("31 days in july.");
		break;
		
		case 8:
		printf("31 days in aug.");
		break;
		
		case 9:
		printf("30 days in sep.");
		break;
		
		case 10:
		printf("31 days in oct.");
		break;
		
		case 11:
		printf("30 days in nov.");
		break;
		
		case 12:
		printf("31 days in dec.");
		break;
		
		default:
		printf("invalid input ");
			}
			return 0;
}
