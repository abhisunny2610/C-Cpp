/* write the program to find the absolute value of the number entered through tthe keyboard*/


/* calculate absolute value */


#include<stdio.h>
#include<math.h>

int main(){
	
	int numb, n;
	
	printf("Enter the Value: ");
	scanf("%d", &numb);
	
	n = abs(numb);
	
	printf("The absolute value of %d is %d", numb, n);
}
