#include<stdio.h>
#include<conio.h>
int main()
{
	int base,power,i;
	long long result = 1;
	printf("enter base : ");
	scanf("%d",&base);
	
	printf("enter power : ");
	scanf("%d",&power);
	
    for(i=1; i<=power; i++)
	{
	result *= base;
}
	printf("Answer : %lld",result);
	
	getch();
}
