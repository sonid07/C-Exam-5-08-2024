#include<stdio.h>
int main(){
	int firstvariable,secoundvariable;
	
//	Input of Firstvariable
	printf("Enter First variable:");
	scanf("%d",&firstvariable);
	
//	Input of Secoundvariable
	printf("Enter Secound variable:");
	scanf("%d",&secoundvariable);
	
//	Logic to Swap First and Secound Variable
	firstvariable=firstvariable+secoundvariable;
	secoundvariable=firstvariable-secoundvariable;
	firstvariable=firstvariable-secoundvariable;
	
//	Output printing statment
	printf("Value of Firstvariable:%d and Secoundvariable:%d",firstvariable,secoundvariable);
}
