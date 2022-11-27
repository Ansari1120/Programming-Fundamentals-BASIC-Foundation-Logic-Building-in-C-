#include<stdio.h>
#include<conio.h>

int main()
{
	int i=0;
	do
	{
		printf("3 * %d = %d \n ",i,(i*i*i));
		i++;
	}
	while(i<10);
	getch();
}
