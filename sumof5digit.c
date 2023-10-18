/* sum of five digit number*/

#include<stdio.h>
#include<math.h>

int main(){
	
	int n, n5, n4, n3, n2, n1;
	long int sum;
	
	printf("Enter the Value: ");
	scanf("%d", &n);
	
	n5 = (n/10000)%10;
	n4 = (n/1000)%10;
	n3 = (n/100)%10;
	n2 = (n/10)%10;
	n1 = n%10;
	
	sum = n5 + n4 + n3 + n2 + n1;
	
	printf("sum of five digit is %ld", sum); 
	
}
