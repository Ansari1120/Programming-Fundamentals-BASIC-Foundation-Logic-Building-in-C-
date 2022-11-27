#include<stdio.h>
#include<conio.h>
int main()
{
	char Name,fathername[50];
	printf("enter your name : ");
	scanf("%s" ,&Name); 
	printf("enter your fathername: ");
	scanf("%s" ,&fathername);
	float std,dob;
	printf("enter your studentid : ");
	scanf("%f" ,&std);
	printf("enter your  date of birth : ");
	scanf("%f" ,&dob);
	
	printf("your name is:");
	printf("%s",&Name);
	printf("your fathername id is:");
	printf("%s",&fathername);
	printf("the studentid is:");
	printf("%f",&std);
	printf("your age is:");
	printf("%f",&dob);
	getch();
}

