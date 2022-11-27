#include<stdio.h>
#include<conio.h>
int main()
{
    float f,c;
    printf("\n Enter temperature in Farhenheight ");
    scanf("%f",&f);
    c=(f-32)*5/9;
    printf("\n The temperature in Celcius is %f",c);
    getch();
}

