/* if ages of Ram, Shyam And Ajay are input through the keyboard, write a program to determine the youngest of the three */

#include<stdio.h>

int main(){
	
	int ram;
	int shyam;
	int ajay;
	int young;
	
	printf("ENTER THE AGE OF RAM: ");
	scanf("%d", &ram);
	printf("ENTER THE AGE OF SHYAM: ");
	scanf("%d", &shyam);
	printf("ENTER THE AGE OF AJAY: ");
	scanf("%d", &ajay);
	
	if(ram<shyam){
		printf("shyam is yonger brother");
	}
	else if(shyam<ajay){
		printf(" ajay is younger brother");
	}
	else{
		printf("ram is younger brother");
	}
	 
}
