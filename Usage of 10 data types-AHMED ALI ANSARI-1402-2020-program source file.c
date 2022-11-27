#include<stdio.h>
#include<conio.h>

int main()
{
	printf("\t\t\t\t\t\t\t\t\tstorage size of data types are below");
	
	printf("\n\nthe size of char is : %d\n",sizeof(char));
		printf("\nthe size of unsigned char is : %d\n",sizeof(unsigned char));
			printf("\nthe size of int is : %d\n",sizeof(int));
				printf("\nthe size of unsigned int is : %u\n",sizeof(unsigned int));
					printf("\nthe size of long is : %ld\n",sizeof(long));
						printf("\nthe size of unsigned long is : %lu\n",sizeof(unsigned long));
						  printf("\nthe size of long long is : %d\n",sizeof(long long));
							printf("\nthe size of float is : %d\n",sizeof(float));
								printf("\nthe size of double is : %d\n",sizeof(double));
									printf("\nthe size of long double is : %d\n",sizeof(long double));
									
			
			printf("\t\t\t\t\t\t\tprinting of all available datatypes under thier particular limits");
									
	char chr1st=118;
	printf("\nthe value of signed char : %d\n",chr1st);
	
	 unsigned char chr2nd=-3;
              printf("\nthe value of unsigned char : %d\n",chr2nd);
              
       short num=-21;
       printf("\nthe integer value is : %i\n",num);
              
         int x = 58560;
         unsigned int y = (unsigned int)x;
         printf("\nunsigned does not accept negativie integers,so the value is  : %u\n",x);
              
           long value1=-2012345234;
           printf("\nthis massive value is : %ld\n",value1);
              
             unsigned long value2=45122354;
             printf("\nunsigned means it cannot print negetive value as above data type did,so the value is : %lu",value2);
             
               long long value3=155223342233432421;
               printf("\nin this data type the limit increased as above data type did,so the value is : %lld",value3);
              
                float pointvalue=7.0/2.0;
                printf("\nfor float the value we input in this is : %f\n",pointvalue);
              
                  double a=342341314.8921;
                  printf("\nthe double value means it will exceed from float limit to further more,so the value is :%lf\n",a);
              
                   long double c=142421341451.6;
                   printf("\nthe long double will increase more digit before point,but some compilers doesn't' support it as this didn't : %Lf\n",c);
                                                       
        getch();
}

