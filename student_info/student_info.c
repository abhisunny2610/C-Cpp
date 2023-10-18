#include<stdio.h>
#include<string.h>

typedef struct student{
	char name[20];
	char stream[15];
	char college[50];
	int id;
	int age;
}std;

void write_student_info_header();

void main(){
	
	std st;
	
	printf("Enter student Name: ");
	gets(st.name);
	
	printf("Enter student stream: ");
	gets(st.stream);
	
	printf("Enter student college: ");
	gets(st.college);
	
	printf("Enter student age: ");
	scanf("%d", &st.age);
	
	printf("Ente students ID: ");
	scanf("%d", &st.id);
	
	
	printf("Name: \t%s\n", st.name);
	printf("Stream: \t%s\n", st.stream);
	printf("College: \t%s\n", st.college);
	printf("Age: \t%d\n", st.age);
	printf("ID: \t%d\n", st.id);
	
	write_student_info_header();
		
}

void write_student_info_header(){
	
	FILE *file;
	
	file = fopen("student_info.csv", "w");
	
	fprintf(file, "Name,Stream,College,Age,ID");
	
	fclose(file);
	
}

