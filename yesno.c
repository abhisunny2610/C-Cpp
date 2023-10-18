#include<stdio.h>

int main(){
	char command = ' ';
	
	printf("do you want to perform this action(y/n): ");
	scanf("%ch", &command);
	
	if (command=='y' || command=='Y'){
		printf("Access Granted!");
	}
	
	else{
		printf("Access Denied!");
	}
		
}
