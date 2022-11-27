#include<stdio.h>
#include<conio.h>

int main()
{
	printf("\t\t\t5 variables with Basic data types used two values for input ");
	float num1,num2,add,sub,mul,div,per;
	printf("\nenter two numbers:");
	scanf("%f %f",&num1,&num2);
	add =num1+num2;
	printf("addition = %f\n",add);
	sub = num1-num2;
	printf("substraction =%f\n",sub);
	mul = num1*num2;
	printf("multiplication =%f\n",mul);
	div = num1/num2;
	printf("division =%f\n",div);
	per = (num1+num2) / 2.0;
	printf("percentage =%f\n",per);
	getch();
}
