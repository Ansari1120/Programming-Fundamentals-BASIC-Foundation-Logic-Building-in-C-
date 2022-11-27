#include<stdio.h>

int main()
{
	int a=5,b=7;
    b=b-a;
    a=a+b;
    b=a-b;
	
	printf("%d",a);
	printf("%d",b);
	return 0;
}
