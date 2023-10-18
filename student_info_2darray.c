#include<stdio.h>
#include<string.h>

void main(){
	
	char students_name[3][15] = {'\0'};
	int students_age[3];
	char students_graduation[3][6] = {'\0'};
	char students_status[3][8];
	
	char ch[15];
	int i=0;
	
	for(i=0; i<4; i++){
		printf("Enter the student %d name: " ,i);
		gets(students_name[i]);

		printf("Enter the student %d graduation: " ,i);
		gets(students_graduation[i]);
		
		printf("Enter the student %d status: " ,i);
		gets(students_status[i]);
		
		printf("Enter the student %d age: " ,i);
		scanf("%d", &students_age);
		gets(ch);
		printf("\n********************************************************\n");
	}
	
		printf("\n\n");

		printf("%-16s %-5s %-10s %-7s" , "Name","Age","Graduation","Status");
		printf("\n-----------------------------------------\n");

		for(i=0; i<4; i++){
			printf("%-16s %-5d %-10s %-7s\n", students_name[i], students_age[i], students_graduation[i], students_status[i]);
	}

	
	
}
