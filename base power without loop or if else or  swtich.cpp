#include<stdio.h>
int main()
{
	int base,power,i=1;
	long result = 1;
	printf("enter any base : ");
	scanf("%d",&base);
	
	printf("enter  any  exponent : ");
	scanf("%d",&power);
	
    i<=power;
	result *= base;
	printf("your output is : %ld",i++,result);
	
	return 0;
}
