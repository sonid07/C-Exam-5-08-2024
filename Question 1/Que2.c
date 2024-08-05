#include<stdio.h>
int main(){
	int age;
//	Input age of user
	printf("Enter your age:");
	scanf("%d",&age);
//	Your age is being verified to cast vote

//	If your age is above 18, you can cast vote
	if(age>18){
		printf("You are eligible to cast vote");
	}
//	If your age is 18 or below 18, you cannot cast vote
	else{
		printf("You are not eligible to cast vote");
	}
}
