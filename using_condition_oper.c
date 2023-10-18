/* Using Condition operators determine */
/* (1) Whether the character entered through the keyboard is a lower case alphabet or not.*/
/* (2) Whether the character entered through the keyboard is a special symbol or not.*/


#include<stdio.h>


int main(){
	
	char ch;
	
	printf("Enter the character: ");
	scanf("%ch", &ch);
	
	if(ch>=97 && ch<=122){
		printf("The character is a lower case symbol\n");
	}
	else if((ch>= 0 && ch<48) || (ch>=58 && ch<65) || (ch>=91 && ch<97) || (ch>= 123 && ch<128)){
		printf("The character is a specail symbol\n");
	}
	else{
		printf("The character is not a lower case symbol or special symbol\n");
	} 
	
	return 0;
		
}
