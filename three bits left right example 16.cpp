#include<stdio.h>
int main()
{
 int x,y;
 printf("Enter value of x:");
 scanf("%d",&x);
 y=x<<3;
 printf("Left shifted data=%d",y);
 printf("Right shifted data=%d",x>>3);
}

