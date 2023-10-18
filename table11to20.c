#include<stdio.h>

int main(){
	int i;
	int j;
	
	for(i=11; i<=20; i++){	
		printf("The multiplication table of %d is:; \n", i);
		
	 for(j=1; j<=10; j++){
	 	printf("%d * %d = %d\n", i, j, i*j);
	 }
	
	}
}
