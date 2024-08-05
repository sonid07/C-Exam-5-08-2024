#include<stdio.h>
int main(){
	int i,number,reverse,reminder;
	printf("Enter number:");
	scanf("%d",&number);
	for(i=number;number!=0;number=number/10){
	reminder=number%10;
	reverse=reverse*10+reminder;
	}
		printf("%d",reverse);
}
