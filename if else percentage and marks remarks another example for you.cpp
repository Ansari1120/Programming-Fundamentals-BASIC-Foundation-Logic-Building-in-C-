#include<stdio.h>
int main(void)

{
 float per,marks;
 printf("enter your percentage and marks");
 scanf("%f\n %f",&per,&marks);    
    
if(per>=90 && marks>=800) 
{
	
	printf("you done excellent job");
}
	
    else if(per>=80 && marks>=700 )
	 {
    	
    printf("its a well done for you");
    }
       if(per>=70 && marks>=600)
	   {
       	printf("its a optimum performance");
	   }
	   else{
	   	printf("work hard to gain for healthy spot");
	   }
return 0;
}
