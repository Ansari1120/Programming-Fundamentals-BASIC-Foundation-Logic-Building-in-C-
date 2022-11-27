#include<stdio.h>

int main()
{
	float Age,days;
	printf("enter your of Age :");
	scanf("%f\n", &Age);
	
	days = Age * 365.0;
	
	printf("Your Age in days are : %f\n", days);
	return 0;
}
