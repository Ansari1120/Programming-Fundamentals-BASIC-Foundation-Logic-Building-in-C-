#include<stdio.h>
#include<conio.h>

int main()
{
	int num,i=1;
	unsigned long a=1;
	printf("enter any number : ");
	scanf("%d",&num);
	
	do
	{
	a =a*i;
	i++;
}
while(i<=num);
printf("The factorial is :%ld",a,i);
	getch ();
}
