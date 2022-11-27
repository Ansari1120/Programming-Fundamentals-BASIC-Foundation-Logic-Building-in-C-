#include<stdio.h>
int main()
{
  char c;
    printf("Y/y?");
    c=getchar();
    if(c=='Y' || c=='y')
    {
        printf("Bye!\n");
    }
    else
    {
        printf("Okay!\n");
    }
    return 0;
}

