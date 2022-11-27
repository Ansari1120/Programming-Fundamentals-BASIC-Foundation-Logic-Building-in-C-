#include<stdio.h>
#include<stdlib.h>

int main()
{
	int per;
	printf("\n\t\t\t\tRemarks");
	printf("\nenter your pecentage:");
	scanf("%d",&per);
	
	if (per>=80)
	{
	printf("your remarks is : Excellent work\n");
    } 
	else if(per>=70)
	{
		printf("your remarks is : good job\n");
	 }
	 else if (per>60)
	 {
	 printf("your remarks is : not well\n");
     }
     else if (per<=60)
     {
       printf("your remarks is : need improvement\n");
	 }
	 else
	 {
	 	printf("fail");
	 }
   return 0;
	  
	
}
