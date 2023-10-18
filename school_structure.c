#include<stdio.h>
#include<string.h>


typedef struct school{
	char school_name[30];
	char school_address[35];
	char affilated [10];
	char principle_name[20];
	char director_name[20];
}schl;

typedef struct info{
	int established;
	int classes;
	int number_of_students;
	int no_of_teachers;
	int no_of_workers;	
}info;

void print_school();
void print_info();


void main(){
	schl sc = {"Tiny Tots Inter College", "Etah Road Tundla", "CBSE", "Priya Parashar", "Sanyoj Parashar"};
	info in = {2001, 80, 2000, 90, 50};
	
	print_school(sc);
	print_info(in);
}

void print_school(struct school schl){
	printf("School Name: \t\t%s\n", schl.school_name);
	printf("School Address: \t%s\n", schl.school_address);
	printf("Affilated To: \t\t%s\n", schl.affilated);
	printf("Principal Name: \t%s\n", schl.principle_name);
	printf("Director Name: \t\t%s\n", schl.director_name);
}

void print_info(struct info info){
	printf("Established In: \t%d\n", info.established);
	printf("Number of Rooms: \t%d\n", info.classes);
	printf("Number of Students: \t%d\n", info.number_of_students);
	printf("Number of Teachers: \t%d\n", info.no_of_teachers);
	printf("Number of Workers: \t%d\n", info.no_of_workers);
}
