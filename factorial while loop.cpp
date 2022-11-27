#include<stdio.h>

int main()
{
	int num,i;
	unsigned long a;
	printf("enter any number :");
	scanf("%d",&num);
	
	while(i<=num)
	{
		a=1;
	 a *= i;
	}
	printf("the factorial is : %d",a);
	return 0;
}
