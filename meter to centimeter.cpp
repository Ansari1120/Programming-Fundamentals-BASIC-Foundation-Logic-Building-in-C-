#include<stdio.h>

int main()
{
	float m,cm;
	printf("enter the value of meters\n:");
	scanf("%f\n", &m);
	
	cm = m * 100.0;
	
	printf("length in centimeters : %.4f\n", cm);
	return 0;
}
