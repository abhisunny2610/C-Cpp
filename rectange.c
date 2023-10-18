#include<stdio.h>

 int main(){
	
	int length;
	int width;
	
	printf("enter the length: ");
	scanf("%d", &length);
	
	printf("enter the width: ");
	scanf("%d", &width);
	
	int area = length*width;
	printf("area: %d", area);
	return 0;
}
