#include<stdio.h>

int main(){
	float amount;
	float rate;
	float time;
	float si;
	
	printf("enter the amount: ");
	scanf("%f", &amount);
	
	printf("enter the rate of interest: ");
	scanf("%f", &rate);
	
	printf("enter period of time: ");
	scanf("%f", &time);
	
	si = ( amount*rate*time)/100;
	
	printf("simple interest: %f", si);
}
 

