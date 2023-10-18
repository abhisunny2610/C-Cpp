#include<stdio.h>


int main(){
	int a;
	char oper;
	int b;
	float res;
	
	printf(" Enter an operator: ");
	scanf("%c", &oper);
	
	printf("Enter the first value: ");
	scanf("%d", &a);
	
	printf("Enter the second value: ");
	scanf("%d", &b);
	
	if(oper == '+'){
		
		res = a + b;
		printf("Addition of %d and %d is: %f", a, b, res);
	}
	else if(oper == '-'){
		
		res = a - b;
		printf("Subtraction of %d and %d is: %f", a, b, res);
	}
	else if(oper == '*'){
		
		res = a * b;
		printf("Product of %d and %d is: %f", a, b, res);
	}
	else if(oper == '/'){
		
		res = a / b;
		printf("Division of %d and %d is: %f", a, b, res);
	}
	 else  
    {  
        printf(" \n You have entered wrong inputs ");  
    }  
}



