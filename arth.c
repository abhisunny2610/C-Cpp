#include<stdio.h>

int main() {
	int a = 0;
	int b = 0;
	
	
	a = 10;
	
	//printf ("result : %d\n", a+20);
	//printf("a is : %d\n", a);
	
	a += 20;
	printf("add: update the value %d \n", a);
	
	a -= 10;
	printf("subtract: updated the value %d \n", a);
	
	a *= 6;
	printf("multiply: update the value %d \n", a);
	
	a /= 5;
	printf("divide: update the value %d \n", a); 
}
