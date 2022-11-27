#include<stdio.h>
#include<conio.h>

void main()
{
	int num,i;
	unsigned long a=1;
	printf("enter any number : ");
	scanf("%d",&num);
	
	for(i=1;i<=num;++i)
	{
	a *= i;
}
	printf(" the factorial is : %d",a);
	return 0;
}
