#include<stdio.h>
/*
for
1
22
333
4444
55555
666666
exchange j with i.
*/

void main(){
	int i;
	int j;
	
	for(i=1; i<=10; i++){
		
		for(j=1; j<=i; j++){
			printf("%d ", i); 
		}
		printf("\n");
	}
	
}
