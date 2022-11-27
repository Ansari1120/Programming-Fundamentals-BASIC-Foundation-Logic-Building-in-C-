#include<stdio.h>
#include<conio.h>

int main()
{
	int i=1;
	do
	{
		printf("2 * %d = %d \n ",i,(i*2));
		i++;
	}
	while(i<11);
	getch();
}
