#include<stdio.h>
#include<conio.h>
int main()
{
    float f,c;
    printf("\n Enter temperature in Celcius ");
    scanf("%f",&c);
    f=c*9/5+32;
    printf("\n The temperature in Fahrenheit is %f",f);
    getch();
}


