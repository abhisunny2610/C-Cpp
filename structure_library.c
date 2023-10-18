#include<stdio.h>
#include<string.h>

typedef struct library{
	char library_name[20];
	char owner_name[20];
	int number_of_seats;
}lib;

typedef struct timing{
	int morning;
	int morning2;
	int evening;
	int evening2;
	
}tym;

typedef struct holiday{
	char holiday[10];
}hd;

void print_library();
void print_timing();
void print_holiday();

void main(){
	
	lib info = {"Sunset Library", "Abhishek", 100};
	tym tm = {6, 11, 2, 8};
	hd h = {"Sunday"};
	
	print_library(info);
	print_timing(tm);
	print_holiday(h);
	
	
}

void print_library(struct library lib){
	printf("Library Name: \t%s\n", lib.library_name);
	printf("Owner Name: \t%s\n", lib.owner_name);
	printf("No. of Seats: \t%d\n", lib.number_of_seats);
}

void print_timing(struct timing tym){
	printf("Morning Timing: %d to %d\n", tym.morning, tym.morning2);
	printf("Evening Timing: %d to %d\n", tym.evening, tym.evening2);
	
}

void print_holiday(struct holiday hl){
	printf("Closed on: \t%s\n", hl.holiday);
}
