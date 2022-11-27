#include<stdio.h>
#include<conio.h>

int main()
{
	printf("5 variables with basic data types in c initalize them and print them,update at least two from them and print out them again");
	printf("\n\t\t\t\t\t\tintermediate student data");
	char name[50]="shazaib";
	printf("\nstudent name is :");
	printf("%s",name);
	int rollnumber=8091;
	printf("\nstudent roll no is: %d",rollnumber);
	int serialnum,part;
	char faculty,sec;
	float per;
	
	
	faculty='E';
	part=1;
	sec='A';
	per=81.6;
	serialnum=1123;
	
	printf("\n\t\t\t\t\t\t~Academic information~");
	printf("\nDepartment : %c %c",faculty,part);
	printf("\nSection : %c",sec);
	printf("\nexpected percentage : %f",per);
	printf("\nform no : %d",serialnum);
	
	printf("\n\n\t\t\t\t\t\t~Update~");
	
	sec='D';
	
	per=71.1;	

	printf("\nDepartment : %c %c",faculty,part);
	printf("\nSection : %c",sec);
	printf("\nmy percentage : %f",per);
	printf("\nform no : %d",serialnum);
	
	return 0;
}
