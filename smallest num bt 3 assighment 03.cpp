#include<stdio.h>
#include<conio.h>

int main()
{
	int a,b,c,smallest;
	printf("put your desired three numbers :");
	scanf("%d %d %d",&a,&b,&c);
	if(a<b && a<c)
	{
	printf("the smallest num is : %d",a);
    }
    else if (b<c)
    {
	printf(" the smallest number is : %d",b);
    }
    else 
    {
	printf("the smallest number is : %d",c);
	}
	return 0;
}
