#include<stdio.h>
int main(){
	int number,sum,firstdigit,lastdigit;
	
//	User inputs value
	printf("Enter any number:");
	scanf("%d",&number);
	
//	lastdigit logic
	lastdigit=number%10;
	while(number>=10){
		(number=number/10);
	}
	
//		Firstdigit logic
	firstdigit=number;
	
//	Sum of First and last digit
	sum=firstdigit+lastdigit;
	
//	Output printing statment
	printf("The sum of the first and the last digit:%d",sum);
}
