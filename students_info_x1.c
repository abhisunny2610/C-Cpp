#include<stdio.h>
#include<string.h>
void student_info{

}
void main(){
	char students_name[4][16] = {'\0'};
	int age[4];
	char students_graduation[4][7] = {'\0'};
	int rollNo[5];
	
	char ch[16];
	int i = 0;
	
	for(i=0; i<4; i++){
		printf("Enter the %d students name: ", i);
		gets(students_name[i]);
		
		printf("Enter the %d student graduation: ", i);
		gets(students_graduation[i]);
		
		printf("Enter the %d student age: ", i);
		scanf("%d", &age[i]);
		
		printf("Enter the %d student rollNo: ", i);
		scanf("%d", &rollNo[i]);
		gets(ch);
		printf("\n-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\n");
		
	}
	printf("\n\n\n");
	
	printf("%-16s %-3s %-10s %-6s", "Name", "Age", "Graduation", "RollNo");
	printf("\n--------------------------------------------------------\n");
	
	for(i=0; i<4; i++){
		printf("%-16s %-3d %-10s %-6d\n", students_name[i], age[i], students_graduation[i], rollNo[i]);
	}
	
	
}
