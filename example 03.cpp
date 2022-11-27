#include<stdio.h>
int main()
{
int c1 = 1,c2 = 2,c3 = 3;
if((c1 < c2) && (c1<c3)){
     printf("\n c1 is less than c2 and c3");
  }
  if (!(c1< c2)){
     printf("\n c1 is greater than c2");
  }
  if ((c1 < c2)||(c1 < c3)){
     printf("\n c1 is less than c2 or c3 or both");
  }
}

