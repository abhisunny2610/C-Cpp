#include<stdio.h>



 int main(){
 	
 	char ch = ' ';
	int number = ' ';
 	
 	printf("enter the student name:");
 	scanf("%c", &ch); 	
 	
 	while(ch !='\r'){
 		
	 scanf("%c", &ch);
	 printf("%c ", ch);
	 }
 	
 		printf("enter the student number:  ");
 		scanf("%d", &number);
	 
 	
 }
