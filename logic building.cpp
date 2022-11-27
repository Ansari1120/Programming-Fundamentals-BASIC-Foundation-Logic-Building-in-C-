#include<stdio.h>
#include<conio.h>

int main()
{
	float urdu,islamiat,type;
	printf("\nenter your urdu marks : ");
	scanf("%g",&urdu);
	printf("\nenter your islamiat marks : ");
	scanf("%g",&islamiat);
	
    type=urdu+islamiat;
	
	if (type==2)
	{
	printf("your remarks is : Excellent work\n");
    } 
	else if(type==3)
	{
		printf("your remarks is : good job\n");
	}
	 else if (type==4)
	 {
	 printf("your remarks is : not well\n");
     }
     else if (type==5)
     {
       printf("your remarks is : need improvement\n");
	 }
	 else
	 {
	 	printf("you're fail");
	 }
   	getch();
	  
	
}
