#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,n,k;
	for (i=1;i<=n;i++)
	{
		for(j=1;j<n-i;j++)
		{
			printf("*");
			printf("\n");
			printf("\t");
		}
		for(k=1;k<=i;k++)
		{
			for(l=i-1;l>=1;l--)
			{
				printf("*");
				printf("\n");
				printf("\t");
			}
		}
	}
	return 0;
}
