#include<stdio.h>
#include<conio.h>

int main()
{
	int number1,number2,i=0;
	long long a=1;
	
	printf("enter any integer and then power : ");
	scanf("%d %d",&number1,&number2);
	
	do 
	{
	a *=number1;
	i++;
}	
	while(i<number2);
	printf("your output is : %lld ",a);
	
	getch();
}
