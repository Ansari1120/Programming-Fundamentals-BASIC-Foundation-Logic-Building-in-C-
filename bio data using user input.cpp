#include<stdio.h>
#include<conio.h>
int main()
{
	char Name[10];
	printf("\t\t\t\t\t\t\tBio data\n");
	printf("enter your name : ");
	scanf("%s",&Name);
	int studentid[10]; 
	printf("enter your studentid : ");
	scanf("%d",&studentid);
	char fathername[10];
	printf("enter your fathername : ");
	scanf("%s",&fathername);
	int dateofbirth[10];
	printf("enter your  date of birth : ");
	scanf("%d",&dateofbirth);
    printf("your name is:%s\n",Name);
	printf("your student id is:%d\n",studentid);
	printf("your father name is:%s\n",fathername);
	printf("the age is:%d\n",dateofbirth);
	getch();
}
