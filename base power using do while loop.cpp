#include<stdio.h>
#include<conio.h>
int main()
{
	int base,power,i=1;
	long long result = 1;
	printf("enter base : ");
	scanf("%d",&base);
	printf("enter power : ");
	scanf("%d",&power);
	
    do
	{
		i++;
	result *= base;
}
while(i<=power);
	printf("Answer : %lld",result);
	
	getch();
}
