#include<stdio.h>
#include<stdlib.h>

int main()
{
	printf("\n\t\t\t\t\t\t\~Welcome to Tuck shop~");
	
	int choose,cost,quantity,totalprice;
	printf("\n\t[1]Coldrink");
	printf("\n\t[2]Juice");
	printf("\n\t[3]Chips");
	printf("\n\t[4]Burger\n");
	printf("enter your choice : ",choose);
	scanf("%d",&choose);
	
	if (choose==1)
	{
		cost=25;
		printf("\none coldrink costs Rs : %d/=",cost);
	}
	else if(choose==2)
    {
   		cost=30;
    	printf("\none juice costs Rs : %d/=",cost);
	}
	else if(choose==3)
	{
		cost=20;
		printf("\none chips costs Rs : %d/=",cost);
	}
	else if(choose==4)
	{
		cost=50;
		printf("\none burger costs Rs : %d/=",cost);
	}
	else 
	{
		printf("\ninvalid input given");
	}
	printf("\n\nenter quantity : ");
	scanf("%d",&quantity);
	
	totalprice=quantity*cost;
	printf("\nyou have to pay :%d ",totalprice);
	return 0;
}
