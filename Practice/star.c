#include<stdio.h>

void main(){
	
	int i;
	int j;
	
	for(i=1; i<=10; i++){
		
		for(j=1; j<=i; j++){
			
			printf("* ");
		}
		printf("\n");
	}
	
	for(i=1; i<=10; i++){
		
		for(j=9; j>=i; j--){
			
			printf("* ");
		}
		printf("\n");
	}
}
