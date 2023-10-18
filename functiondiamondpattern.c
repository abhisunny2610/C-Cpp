#include<stdio.h>

void pattern();

int main(){
	pattern();
	
}

void pattern(){
	int i;
	int j;
	int size = 15;
	int space = size-1;
	
	for(i=1; i<=size; i++, space--){
		
		for(j=1; j<=space+2*i-1; j++){
			
			if(j<=space){
				printf(" ");
			}
			else{
			printf("*");
			}
				
		}
		printf("\n");
		
}
	space = 1;

for(i=1; i<=size; i++, space++){
		
		for(j=1; j<=space+2*(size-i)-1; j++){
			
			if(j<=space){
				printf(" ");
			}
			else{
					printf("*");
			}
				
		}
		printf("\n");
		
	}
}
