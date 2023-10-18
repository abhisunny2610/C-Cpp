/* Whether a year enterd through the keyboard is aleap year or not */

#include<stdio.h>


int main(){
	
	int num;
	
	printf("Enter a year: ");
	scanf("%d", &num);
	
	if( (num % 100 == 0) || (num % 400 == 0) || (num % 4 == 0)){
		printf("Leap Year");
	}
	else{
		printf("Not a leap Year");
	}
}  
