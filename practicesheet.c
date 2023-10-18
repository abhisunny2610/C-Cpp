#include<stdio.h>

int main(){
	int a, b, c, d, e, sum, total = 100;
	float percentage;
	
	printf("enter the marks of 5 subjects: ");
	scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);
	
	sum = a+b+c+d+e;
	
	percentage= ((sum*100)/total);
	
	if(percentage>=80){
		printf("You got 1st Divison");
	}
	else if(percentage<=80 && percentage>=60){
		printf("You got 2nd Divison");
	}
	else if(percentage<=60 && percentage>=40){
		printf("You got 3rd Division");
	}
	else{
		printf("You are Fail");
	}
}
