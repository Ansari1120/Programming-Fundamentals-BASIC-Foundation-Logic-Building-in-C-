#include<stdio.h>
int main()
{
	int choice,quantity,cost,totalprice;
	printf("[1]Coldrink");
	printf("[2]Juice");
	printf("[3]Chips");
	printf("[4]Burger");
	printf("enter your choice here : ");
	Scanf("%d",&choice);
	
    	if(choice==1)
		{
			cost=25;
			printf("one coldrink costs Rs : /=",cost);
		}
		else if(choice==2)
		{
			cost=30;
			print("one juice costs Rs : /=",cost);		
		}
		else if(choice==3)
		{
			cost=19;
			print("one juice chips Rs : /=",cost);		
		}
		else if(choice==4)
		{
			cost=50;
			print("one juice burger Rs : /=",cost); 	
		}
		else 
		{
			printf("invalid input");
		}
		
	printf("enter quantity : ");
	scanf("%d",&quantity);
	
	totalprice=quantity*choice;
	
     printf("total price of your purchased items : %d",totalprice);
		
		return 0;
}
