#include<stdio.h>
int main()
{
	float base,power,i;
	long long result = 1;
	printf("enter any base : ");
	scanf("%f",&base);
	
	printf("enter  any  exponent : ");
	scanf("%f",&power);
	
	i=1;i<=power;i++;
	result *=base;
	printf("your output is : %lld",result);
	
	return 0;
}
