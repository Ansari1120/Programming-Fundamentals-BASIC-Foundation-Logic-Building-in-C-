#include<stdio.h>
#include<conio.h>

int main(void)
{
	printf("\n\t\t\t\t\t\t\tmarksheet");
	float subject1,subject2,subject3,subject4,subject5,total,obtained,per;
	printf("\nenter marks of 1st subject:");
	scanf("%f",&subject1);
	printf("enter marks of 2st subject:");
	scanf("%f",&subject2);
	printf("enter marks of 3st subject:");
	scanf("%f",&subject3);
	printf("enter marks of 4st subject:");
	scanf("%f",&subject4);
	printf("enter marks of 5st subject:");
	scanf("%f",&subject5);
	total=550;
	obtained = subject1+subject2+subject3+subject4+subject5;
	printf("obtained marks are:%f\n",obtained);
	per= obtained/total*100;
	printf("the percentage of this subjects is:%f\n",per);
	return 0;
	
}
