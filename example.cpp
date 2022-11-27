#include<stdio.h>
#include<stdlib.h>
int main(void)
{
int num1,num2,result;

printf("Enter 2 nos. num1 & num2:");

scanf("%d%d",&num1,&num2);
result=(num1==num2);
printf("%d\n",result);
result=(num1!= num2);
printf("%d\n",result);
result=(num1>num2);
printf("%d\n",result);
result=(num1>=num2);
printf("%d\n",result);
result=(num1<num2);
printf("%d\n",result);
result=(num1<=num2);
printf("%d\n",result);
return 0;
}

