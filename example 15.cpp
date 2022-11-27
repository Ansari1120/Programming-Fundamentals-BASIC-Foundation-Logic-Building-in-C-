#include<stdio.h>
int main()
{
      int a=1,b=2;  
      printf("%d\t", (a<b) && (a<=b));
      printf("%d\t", (a==b) || (a<b));
      printf("%d\t", !(a==b));
      return 0;
}


