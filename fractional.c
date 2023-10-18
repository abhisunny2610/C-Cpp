
#include<stdio.h>

int main() {
	int number = 6;
	int fractional = 1;
	int i;
	
	for(i=1; i<=number; i++){
		fractional *= i;
	}
	
	printf("fractional of %d : %d", number, fractional);
}
