#include<stdio.h>
int main ()
{
   int result; 
printf("Enter your percentage\n");
scanf("%d",&result);
if (result >= 75)
        printf("Passed: Grade A\n");
else if (result >= 60)
        printf("Passed: Grade B\n");
else if (result >= 45)
        printf("Passed: Grade C\n");
else
        printf("Failed\n");
     
}

