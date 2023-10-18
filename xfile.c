#include<stdio.h>

int main(){
	char ch = ' ';
	printf("Enter your name: ");
	scanf("%c", &ch);
	
	printf("Hello %c", ch);
	
	while(ch != '\r'){
		scanf("%c", &ch);
		printf("%c", ch);

	}
	
}
