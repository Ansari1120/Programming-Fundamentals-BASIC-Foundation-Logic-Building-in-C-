#include<stdio.h>

int main()
{
	float inch,feet;
	printf("enter value of inches :");
	scanf("%f\n", &inch);
	
	feet = inch / 12.0;
	
	printf("the value of feet is : %f\n", feet);
	return 0;
}
