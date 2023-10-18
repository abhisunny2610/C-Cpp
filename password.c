#include<stdio.h>

#define PASSWORD 1234567

void main(){
	int input_password;
	
	printf("enter the password: ");
	scanf("%d", &input_password);
	
	if(input_password == PASSWORD){
		
		printf("Access Granted");
	}
	else{
	printf("Access Denied");
	
	}
}
