#include<stdio.h>      /* including header files */
#include<conio.h>
int main ()        /* using void as it indicates the program that execution starts from here */
{                                 /* starting the main course from here */
float maths,physics,chemistry,urdu,english;         /* defining 5 subjects */
float total,obtained,percent1,percent2;
total=500;                                          /* initializing the values */
printf("\n\t\t ~MARKSHEET~");                       /* printing the values */
printf("\n\n\t Enter your marks in maths:");
scanf("%f",&maths);                                 /* providing address of variables */
printf("\n\n\t Enter your marks in physics:");
scanf("%f",&physics);
printf("\n\n\t Enter your marks in chemistry:");
scanf("%f",&chemistry);
printf("\n\n\t Enter your marks in urdu:");
scanf("%f",&urdu);
printf("\n\n\t Enter your marks in english:");
scanf("%f",&english);
obtained=maths+physics+chemistry+urdu+english;       /* calculating obtained marks */
printf("\n\n\t Marks obtained:%.2f",obtained);
percent1=obtained/total;                             /* calculating percentage */
percent2=percent1*100;
printf("\n\n\t Percentage:%.2f",percent2);
getch();
} 

