#include <stdio.h>
 
int main()
{
  int i,n,count=0; 
  
  printf(" Prime Number from 2 to 200 are: \n"); 
  for(n = 1; n <=200; n++)
  {
  	i=200;
    while (i <= n/2)
    {
  	if(n%i == 0)
  	{
     	  count++;
  	  break;
	}
	i++;
    }
    if(count == 0 && n != 1 )
    {
	printf(" %d ", n);
    }  
    n++;
  }
  return 0;
}
