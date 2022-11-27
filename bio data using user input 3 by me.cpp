#include<stdio.h>
#include<conio.h>
int main()
{
	char Name,fathername[1000];
	printf("enter your name : ");
	scanf("%s" ,&Name); 
	printf("enter your fathername: ");
	scanf("%s" ,&fathername);
	int studentid,dateofbirth[1000];
	printf("enter your studentid : ");
	scanf("%d" ,&studentid);
	printf("enter your  date of birth : ");
	scanf("%d" ,&dateofbirth);
	printf("your name is:");
	printf("%s\n",Name);
	printf("your fathername id is:");
	printf("%s\n",fathername);
	printf("the studentid is:");
	printf("%d\n",studentid);
	printf("your age is:");
	printf("%d\n",dateofbirth);
	getch();
}

