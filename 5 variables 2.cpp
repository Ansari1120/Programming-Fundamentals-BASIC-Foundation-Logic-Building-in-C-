#include<stdio.h>
#include<string.h>

int main()
{
	printf("5 variables with basic data types in c initalize them and print them,update at least two from them and print out them again");
	printf("\n\t\t\t\t\t\t\t\t\tstudent data");
	char name[50];
	printf("\n student name is :qudus");
	printf("%c",name);
	int rollnumber;
	printf("\nstudent roll no is 90125%d\n",rollnumber);
	int form;
	char dpt,sec,part;
	float cgpa;
	
	
	dpt='C';
	sec='A';
	part='S';
	cgpa=3.6;
	form=563;
	
	printf("\n\t\t\t\t\t\t|information|");
	printf("\nDepartment : %c %c",dpt,part);
	printf("\nSection : %c",sec);
	printf("\nexpected cumulative Grade point average : %f",cgpa);
	printf("\nform no : %d",form);
	
	printf("\n\n\t\t\t\t\t\t|Update|");
	
	sec='D';
	
	cgpa=2.1;	

	printf("\nDepartment : %c %c",dpt,part);
	printf("\nSection : %c",sec);
	printf("\nmy exact cumulative Grade point average turned out to be : %f",cgpa);
	printf("\nform no : %d",form);
	return 0;
}
