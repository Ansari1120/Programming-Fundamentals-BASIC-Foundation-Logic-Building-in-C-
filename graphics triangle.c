#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,k,l;
	for (i=1;i<=6;i++)
	{
		for(j=1;j<i-i;j++)
		{
			printf("*");
		}
		for(k=1;k<=i;k++)
		{
			for(l=i-1;l>=1;l--)
			{
				printf("*");
			}
		}
	}
	return 0;
}
