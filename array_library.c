#include<stdio.h>
#include<string.h>

void main(){
	
	char library_name[5][30];
	char library_address[5][10];
	char owner_name[5][20];
	int no_of_seats[5];
	int no_of_seats_available[5];
	
	char ch[1];
	int i = 0;
	int lib_size = 1;
	
	for(i=0; i<lib_size; i++){
		
		printf("Enter %d Library Name: ", i);
		gets(library_name[i]);
		
		printf("Enter %d Library Address: ", i);
		gets(library_address[i]);
		
		printf("Enter %d library Owner Name: ", i);
		gets(owner_name[i]);
		
		printf("Enter no. of Seats in %d library: ", i);
		scanf("%d", &no_of_seats[i]);
		
		printf("Enter no. of Seats available in %d library: ", i);
		scanf("%d", &no_of_seats_available[i]);
		
		gets(ch);
		printf("\n--------------------------------------------------\n");
	}
	
	
		printf("%-15s %-11s %-18s %-10s %-20s", "Library Name", "Address", "Owner Name", "No of Seats", "No of Seats Available");
		printf("\n-----------------------------------------------------------------------------\n");
		
		for(i=0; i<lib_size; i++){
			printf("%-15s %-11s %-18s %-10d %-20d\n", library_name[i], library_address[i], owner_name[i], no_of_seats[i], no_of_seats_available[i]);
	}
}
