#include<stdio.h>

int main()
{
	int ch;
	printf("\n\t[1]Add");
	printf("\n\t[2]Edit");
	printf("\n\t[3]delete");
	printf("\n\t[4]exit");
	scanf("%d\n\n",&ch);
	if (ch==1)
	{
		printf("Add option selected");
	}
	else if(ch==2)
    {
    	printf("Edit option selected");
	}
	else if(ch==3)
	{
		printf("delete option selected");
	}
	else if(ch==4)
	{
		printf("exit option selected");
	}
	else 
	{
		printf("invalid input given");
	}
	return 0;
}
