#include<stdio.h>

int main(){
	
	char colour;
	
	printf("Enter Colour First Word: ");
	scanf("%c", &colour);
	
	if(colour == 'r'){
		printf("RED");
	}
	else if(colour == 'g'){
		printf("GREEN");
	}
	else if(colour == 'b'){
		printf("BLUE");
	}
	else{
		printf("Out of RGB colour!");
	}
}
