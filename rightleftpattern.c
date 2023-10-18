#include<stdio.h>

int main(){
	int i;
	int j;
	
	for(i=1; i<=10; i++){
		
		for(j=1; j<=i; j++){
			printf("* ");
		}
		
		printf("\n");
	}
	
	for(i=1; i<=9; i++){   // for last and first line use 10.
		
		for (j=9; j>=i; j--){
			printf("* ");		
		}
		
		printf("\n");
		
	}
}
