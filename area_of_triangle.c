/* the traiangle is valid if the sum of all three angles is equal to 180. */

#include<stdio.h>

int main(){
	int a, b, c;

	
	printf("Enter the angles of triangle: ");
	scanf("%d %d %d", &a, &b, &c);
	
	int sum = a + b + c;
	printf("The sum of the triangle is: %d", sum);
	
	
	if(sum == 180){
		printf(" The triangle is valid");
	}
	else{
		printf(" The triangle is unvalid");
	}
	
}
