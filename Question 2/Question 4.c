#include<stdio.h>
int main(){
	//	Variables are stored in int datatype
	int number1,number2,number3;
	
    //	Input First Number
	printf("Enter any number:");
	scanf("%d",&number1);
	
	//	Input Secound Number
	printf("Enter any number:");
	scanf("%d",&number2);
	
	//	Input Third Number
	printf("Enter any number:");
	scanf("%d",&number3);
	
	//	Numbers are being verified which are minimum and which are maximum
	if(number1<number3){
		if(number1<number2){
			printf("Minimum number=%d",number1);
		}
		else{
			printf("Minimum number=%d",number2);
		}
	}
	else{
			printf("Minimum value=%d",number3);
	}
}
