#include<stdio.h>


void sub(int, int);

void main(){
	sub(7, 9);
}

void sub(int a, int b){
	printf("sub of a and b is: %d+%d = %d", a,b, a-b);
}
