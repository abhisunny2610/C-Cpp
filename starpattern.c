#include<stdio.h>

int main(){
	int i;
	int j;
	
	
	for(i=1; i<=26; i++){
		
		for(j=1; j>=i; j--){
			printf("%c ", i+64);
		}
		
		printf("\n");
	}
	
	
}
