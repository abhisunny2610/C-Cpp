#include<stdio.h>
#include<math.h>

int main(){
	
	int firstvalue;
	int secondvalue;
	char operator;
	int result;
	
	printf("Enter Calculation \n\n");
	scanf("%d %c %d", &firstvalue, &operator, &secondvalue);
	
	switch(operator){
		
		case '+': result = firstvalue+secondvalue; 
		break;
		
		case '-': result = firstvalue-secondvalue; 
		break;
		
		case '*': result = firstvalue*secondvalue; 
		break;
		
		case '/': result = firstvalue/secondvalue; 
		break;
		
		default: printf("Unvalid Calculation");
	}
	
	printf("%d %c %d = %d", firstvalue, operator, secondvalue, result);
	
}
