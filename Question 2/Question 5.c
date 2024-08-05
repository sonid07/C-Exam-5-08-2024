#include<stdio.h>
int main(){
	int number=1,count=0;
	
//	Input of Numbers
	printf("Enter numbers:");
	scanf("%d",&number);

	while(number!=0){
		number/=10;
			count++;
		
		
	}
printf("Digit=%d",count);
}
