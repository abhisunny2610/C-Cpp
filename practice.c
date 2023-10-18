#include<stdio.h>

int main(){
	
	int i; 
	int j;
	int size = 10;
	int space = size-1;
	
	
	for(i=1; i<=size; i++, space--){
		
		for(j=1; j<=2*i; j++){
			if(j<=space){
				printf("*");
			}
			else{
				printf(" ");
			}
	
		}
		printf("\n");
		
	}
	
	for(i=2; i<=10; i++){
		
		for(j=10; j>=i; j--){
			printf("*");
		}
	
		printf("\n");
	}
	
}
