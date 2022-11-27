#include<stdio.h>

int main()
{
	int row,n,column;
	printf("enter row : ");
	scanf("%d",&n);
	
	for(row=0;row<n;row++)
	{
		for(column=0;column<n;column++)
		{
			if(row==0 || column==0 || row==n-1 || column==n-1){
				printf("*");
			}
			else {
				printf(" ");
			}
		}
		printf("\n");
	}
	return 0;
}
