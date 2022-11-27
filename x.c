#include<stdio.h>

int main()
{
	int n,column1,column2;
	printf("enter column : ");
	scanf("%d",&n);
	
	for(column1=n-1;column1<n;column1++)
	{
		for(column2=n-1;column2>=0;column2--)
		{
			if(column1==0 || column1==n-1 || column2==n-1-column1){
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
