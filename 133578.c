#include<stdio.h>

int main(){
	
	int i;
	int j;
	int space = 10;
	
	for(i=1; i<=10; i++){
		
		for(j=10; j>=space+2*i; j++){
			printf("*");
			
			
		}
		printf("\n");
		
	}
}
