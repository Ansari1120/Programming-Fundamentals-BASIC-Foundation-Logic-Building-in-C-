#include<stdio.h>
#include<conio.h>

int main(void)
{
	int age,mon,days,hrs,min,sec;
	printf("enter your age :");
	scanf("%d\n",&age);
	
	mon = age*12;
	printf("your age in months is :%d\n",mon);
	
	days = age*365;
	printf("your age in days is :%d\n",days);
	
	hrs = age*365*24;
	printf("your age in hours :%d\n",hrs);
	
	min = age*365*24*60;
	printf("your age in minutes is :%d\n",min);
	
	sec = age*365*24*60*60;
	printf("your age in seconds :%d\n",sec);
	getch();
}
