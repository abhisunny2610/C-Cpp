#include<stdio.h>
#include<string.h>

void main(){
	
	char students_name[2][16] = {'\0'};
	int students_age[2];
	char students_graduation[2][10] = {'\0'};
	
	int i = 1;
	char ch[5];
	
	for(i=1; i<3; i++){
		printf("Enter the student %d name: ", i);
		gets(students_name[i]);
		
		printf("Enter the student %d graduation: ", i);
		gets(students_graduation[i]);
		
		printf("Enter the students %d age: ", i);
		scanf("%d", &students_age[i]);
		
		gets(ch);
		printf("\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\n");
	}
	
		printf("\n\n\n");
		
		printf("%-16s %-5s %10s", "Name", "Age", "Graduation");
		printf("\n---------------------------------------------------------------\n");
		
		for(i=1; i<3; i++){
			printf("%-16s %-5d %-10s\n", students_name[i], students_age[i], students_graduation[i]);
		}
	
	
}
