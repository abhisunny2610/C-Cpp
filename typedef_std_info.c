#include<stdio.h>

typedef struct students{
	char name[16];
	int age;
	char graduation[7];
}stu;

void print_st();

void main(){
	
	stu st1 = {"Abhishek", 18, "BCA"};
	
	stu st2 = {"Manish", 26, "B.Tech"};
	
	print_st(st1);
	print_st(st2);
}

void print_st(struct students st){
	
	printf("Name: \t\t%s\n", st.name);
	printf("Graduation: \t%s\n", st.graduation);
	printf("Age: \t\t%d\n", st.age);
	printf("\n------------------------------------------\n");
}
