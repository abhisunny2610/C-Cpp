#include<stdio.h>

int main(){
	
	char ch = ' ';
	
	printf("enter the name: ");
	scanf("%c", &ch);
	
	printf("hello %c", ch);
	
	while(ch != '\r'){
		scanf("%c", &ch);
		printf("%c", ch);
	}
}
