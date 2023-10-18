#include<stdio.h>
#include<string.h>
#include<stdbool.h>
#include<windows.h>

typedef struct book{
	char title[30];
	char name[20];
	char subject[10];
	char author[20];
	char publisher[20];
	int chapter;
	int pages;
	float price;
}book;

typedef struct time{
	int hour;
	int min;
	int sec;
	
}time;

typedef struct date{
	int day;
	int month;
	int year;
}date;

typedef struct address{
	int plot_no;
	char street_landmark[20];
	char town[15];
	char city[15];
	char district[15];
	char state[20];
	char country[20];
	int pincode;
}adrs;

typedef struct student{
	char name[20];
	char stream[10];
	adrs address;
	int id;
	int std;
	int age;
}stud;

typedef struct department{
	char dept_subject[20];
	int no_of_teachers;
	int no_of_students;
}dept;

void add_book(book, date, time); 
void remove_book(book, date, time); 
void issue_book(stud, book, date, time, adrs);
void return_book(stud, book, date, time);
void view_record1();
void view_record2();

void print_book(book);
void print_time(time);
void print_date(date);
void print_address(adrs);
void print_student(stud);
void print_department(dept);


void scan_book(book);
void scan_time(time);
void scan_date(date);
void scan_address(adrs);
void scan_student(stud);
void scan_department(dept);

//========================================================================================================================================//

void main(){
	bool True = true;
	bool False = false;
	int i = 0;
	char ch;
	
	COORD c;
	c.X = 17;
	c.Y = 21;
	
	printf("%40s Welcome To Library Management\n", " ");
	
	for(i=0; i<20; i++){
		printf("-----");
	}
	
	printf("\n1. Add a book\n");
	printf("2. Remove a book\n");
	printf("3. Issue a book\n");
	printf("4. Return a book\n");
	
	for(i=0; i<15; i++){
		printf("\n");
	}
	
	printf("Select a Option: \n");
	
	printf("\n");
	for(i=0; i<20; i++){
		printf("-----");
	}
	
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
	
	ch = getch();
	printf("\nSelected Option: %c", ch);
	getch();
	system("cls");
	
	if(ch == '1'){

		printf("%40s Add a book section\n", " ");
			for(i=0; i<20; i++){
		printf("-----");
	}
	}
	else if(ch == '2'){
		printf("remove a book section\n");
		for(i=0; i<20; i++){
		printf("-----");
	}
	}
	else if(ch == '3'){
		printf("Issue a book section\n");
		for(i=0; i<20; i++){
		printf("-----");
	}
	}
	else if(ch == '4'){
		printf("Return a book section\n");
		for(i=0; i<20; i++){
		printf("-----");
	}
	}
	else{
		printf("Invalid Selection!\n");
		for(i=0; i<20; i++){
		printf("-----");
	}
	}
}
	 


//========================================================================================================================================//


//========================================Scanning Part=========================================================//
void scan_book(book bk){
	printf("Enter Book Title: ");
	gets(bk.title);
	
	printf("Enter Book Name: ");
	gets(bk.name);
	
	printf("Enter Book Subject: ");
	gets(bk.subject);
	
	printf("Enter Book Author: ");
	gets(bk.author);
	
	printf("Enter Book Publishar: ");
	gets(bk.publisher);
	
	printf("Enter Book Chapter: ");
	scanf("%d", &bk.chapter);
	
	printf("Enter Book Pages: ");
	scanf("%d", &bk.pages);
	
	printf("Enter Book Price: ");
	scanf("%f", &bk.price);
}

void scan_time(time tym){
	printf("Enter an Hour: ");
	scanf("%d", &tym.hour);
	
	printf("Enter an Min.: ");
	scanf("%d", &tym.min);
	
	printf("Enter an Sec.: ");
	scanf("%d", &tym.sec);
}

void scan_date(date dt){
	printf("Enter a Day: ");
	scanf("%d", &dt.day);
	
	printf("Enter a Month: ");
	scanf("%d", &dt.month);
	
	printf("Enter a Year: ");
	scanf("%d", &dt.year);
}

void scan_address(adrs ad){
	printf("Enter a Streat/Landmark: ");
	gets(ad.street_landmark);
	
	printf("Enter a Town: ");
	gets(ad.town);
	
	printf("Enter a City: ");
	gets(ad.city);
	
	printf("Enter a District: ");
	gets(ad.district);
	
	printf("Enter a State: ");
	gets(ad.state);
	
	printf("Enter a Country: ");
	gets(ad.country);
	
	printf("Enter a PlotNo.: ");
	scanf("%d", &ad.plot_no);
	
	printf("Enter a Pincode: ");
	scanf("%d", &ad.pincode);
}

void scan_student(stud st){
	printf("Enter student Name: ");
	gets(st.name);
	
	printf("Enter student stream: ");
	gets(st.stream);
	
	printf("Enter student ID: ");
	scanf("%d", st.id);
	
	printf("Enter student STD: ");
	scanf("%d", st.std);
	
	printf("Enter student Age: ");
	scanf("%d", &st.age);
	
}

void scan_department(dept dpt){
	printf("Enter the subject Teacher: ");
	gets(dpt.dept_subject);
	
	printf("Enter No. of Teachers: ");
	scanf("%d", &dpt.no_of_teachers);
	
	printf("Enter No. of Students: ");
	scanf("%d", &dpt.no_of_students);
}


//==================================================Printing Part======================================================//

void print_book(book bk){
	printf("Title: \t%s\n", bk.title);
	printf("Book Name: \t%s\n", bk.name);
	printf("Subject: \t%s\n", bk.subject);
	printf("Author: \t%s\n", bk.author);
	printf("Publisher: \t%s\n", bk.publisher);
	printf("Chapter: \t%d\n", bk.chapter);
	printf("Pages: \t%d\n", bk.pages);
	printf("Price: \t%f\n", bk.price);
}

void print_date(date dt){
	printf("Date: \t%d/%d/%d\n", dt.day, dt.month, dt.year );
}

void print_time(time tym){
	printf("Time: \t%d-%d-%d\n", tym.hour, tym.min, tym.sec);
}

void print_address(adrs ad){
	printf("Ploat No.: \t%d\n", ad.plot_no);
	printf("Streat-Landmark: \t%s\n", ad.street_landmark);
	printf("Town: \t%s\n", ad.town);
	printf("City: \t%s\n", ad.city);
	printf("District: \t%s\n", ad.district);
	printf("State: \t%s\n", ad.state);
	printf("Country: \t%s\n", ad.country);
	printf("Pincode: \t%d\n", ad.pincode);
}

void print_student(stud st){
	printf("Student Name: \t%s\n", st.name);
	printf("Stream: \t%s\n", st.stream);
	printf("Class: \t%d\n", st.std);
	printf("ID: \t%d\n", st.id);
	printf("Age: \t%d\n", st.age);
//	printf_adrs("Address: \t", st.address);
}

void print_department(dept dpt){
	printf("Dep. Subject: \t%s\n", dpt.dept_subject);
	printf("No. of Teachers: \t%d\n", dpt.no_of_teachers);
	printf("No. of Students: \t%d\n", dpt.no_of_students);
	
}
