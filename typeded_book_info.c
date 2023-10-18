#include<stdio.h>

typedef struct date{
	int day;
	int month;
	int year;
}date;

typedef struct book{
	char book_name[20];
	char author_name[20];
	int pages;
//	date publish_date;
}book;

void print_book();
void print_date();

void main(){
	
	book bk = {"Let C", "Yashavant Kanetkar", 300};
	book bk1 = {"Let C++", "Narayan Murti", 400};
	
	date dt = {12, 01, 2004};
	
	print_book(bk);
	print_date(dt);
	print_book(bk1);
	
	
	
}

void print_book(struct book bk){
	printf("Book Name: \t%s\n", bk.book_name);
	printf("Author Name: \t%s\n", bk.author_name);
	printf("No. of Pages: \t%d\n", bk.pages);
}

void print_date(struct date dt){
	printf("Publish Date: \t%d/%d/%d\n", dt.day, dt.month, dt.year );
}







