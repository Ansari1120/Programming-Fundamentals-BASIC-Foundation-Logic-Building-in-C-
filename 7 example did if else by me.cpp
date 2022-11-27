#include<stdio.h>
#include<stdlib.h>

int main()
{
	printf("\n\t\t\t\t~Flight ticket booking~");
	
	int flight;
	printf("\n\t[1]book economy class");
	printf("\n\t[2]book buisnees class");
	printf("\n\t[3]view time of flight and booking details");
	printf("\n\t[4]exit\n");
	printf("enter your choice : ",flight);
	scanf("%d",&flight);
	
	if (flight==1)
	{
		printf("economy option selected");
	}
	else if(flight==2)
    {
    	printf("buisness option selected");
	}
	else if(flight==3)
	{
		printf("time/booking option selected");
	}
	else if(flight==4)
	{
		printf("exit option selected");
	}
	else 
	{
		printf("invalid input given");
	}
	return 0;
}
