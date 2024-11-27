#include <stdio.h>
#include <string.h>

struct student {
	int ID;
	char name[10];
	double grade;
};

void main(void) {
	struct student s1 = {24, "Eunju", 4.2};
	
	s1.ID = 20;
	strcpy(s1.name, "Seowon");
	s1.grade = 4.3;
	
	printf("ID : %d\n", s1.ID);
	printf("name : %s\n", s1.name);
	printf("grade : %f\n", s1.grade);
}
