#include<stdio.h>
#include<conio.h>

int main()
{
	int number1,number2,i;
	long a=1;
	
	printf("enter desired integer then power : ");
	scanf("%d %d",&number1,&number2);
	i=number1*number2;
	for(i=0;i<number2;i++)
	{
	a *=number1;
}	
	printf("the result is : %ld ",a);
	getch();
}
