#include<stdio.h>

int main(){
	int number=5;
	int* numberPrt= &number;
	printf("%d\n", &number);
	printf("%d\n", numberPrt);
	printf("%d\n", number);
	printf("%d\n",*numberPrt); 
	
	return 0; 
} 
