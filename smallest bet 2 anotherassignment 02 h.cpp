#include<stdio.h>
#include<conio.h>
int main()
{
	int y,z,small;
	printf("enter first number : ");
	scanf("%d",&y);
	printf("enter second number : ");
	scanf("%d",&z);
	
	if (y<z)
	small =y;
	else 
	small =z;
	printf("the smallest number between entered two is : %d",small);
	getch();
}
