#include<stdio.h>
#include<conio.h>

int main()
{
	printf("\t\t\t5 variables with Basic data types used two for input ");
	int num1,num2,add,sub,mul,div,rem;
	printf("\nenter two numbers:");
	scanf("%d %d",&num1,&num2);
	add =num1+num2;
	printf("addition = %d\n",add);
	sub = num1-num2;
	printf("substraction =%d\n",sub);
	mul = num1*num2;
	printf("multiplication =%d\n",mul);
	div = num1/num2;
	printf("division =%d\n",div);
    div = num1%num2;
	printf("reminder =%d\n",rem);
}
