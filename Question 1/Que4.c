#include<stdio.h>
int main(){
	int r;
	float formula;
//	Radius is being inputed
	printf("Enter value of Radius:");
	scanf("%d",&r);
	
//	Formula to find answer
	formula=((3*3.14*r*r*r)/4);
	
//	Output printing statment
	printf("Answer=%.2f",formula);
}
