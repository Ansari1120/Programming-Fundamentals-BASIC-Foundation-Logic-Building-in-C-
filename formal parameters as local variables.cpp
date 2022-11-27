
#include <stdio.h>
 
/* global variable declaration */
 
int main () {

  /* local variable declaration in main function */
  int a = 10;
  int b = 20;
  int c;

  printf ("value of a in main() = %d\n",  a);
  
  c = ( a, b);
  
  printf ("value of c in main() = %d\n",  c);


/* function to add two integers */
int sum(int a, int b)

   printf ("value of a in sum() = %d\n",  a);
   printf ("value of b in sum() = %d\n",  b);

   return a + b;
   
   return 0;
   
}

