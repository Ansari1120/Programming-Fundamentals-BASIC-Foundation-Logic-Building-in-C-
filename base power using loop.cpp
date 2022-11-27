#include<stdio.h>
#include<conio.h>

int main()
{
	int number1,number2,i;
	long long a;
	
	printf("enter desired integer then power : ");
	scanf("%d %d",&number1,&number2);
	
	do 
	{
	i=number1*number2;
	a *=a*i;
	a++;
	printf("the result is : %lld ",a);
}
	while(a=1);
	
	getch();
}
