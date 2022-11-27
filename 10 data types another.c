#include<stdio.h>
#include<conio.h>

int main()
{
	printf("All 10 Basic Data types are below,|note:all data types under we input the values is in thier particular limits and not exceed out|");

	char chr1st=118;
	printf("\nthe value of signed char : %d\n",chr1st);

	unsigned char chr2nd=-3;
              printf("the value of unsigned char : %d\n",chr2nd);

              short num=-21;
              printf("the integer value is %i\n",num);

              int x = 58560;
              unsigned int y = (unsigned int)x;
              printf("unsigned does not accept negativie integers : %u\n",x);

              long value1=-2012345234;
              printf("this massive value is : %ld\n",value1);

              unsigned long value2=45122354;
              printf("unsigned means it cannot print negetive value as above data type did,so the value is : %lu",value2);

              float fractionalvalue=2.43;
              printf("the value we input in this is : %g\n",fractionalvalue);

              double a=342.89;
              printf("the double value means it will exceed from float limit to further more,so the value is :%lf\n",a);

              long double c=1412.67;
              printf("the long double will increase one more digit before point : %lf\n",c);

        getch();
}
