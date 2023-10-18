#include<stdio.h>

int main(){
	
	int i;
	int j;
	int space = 9;
	
	for(i=1; i<=10; i++, space--){
		
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
}

