#include<stdio.h>
#include<conio.h>

int main(void)
{
	printf("\n\t\t\tLibrary book finding program ....Note : enter  number between 1 to 10,\n\t\t\tNOTE : 'c' indicates multiplication similarly p=plus,m=minus,d=divide");
	float basicoperator,section,row,bookgern,p,m,d,c;
	printf("\nenter library section : ");
	scanf("%f",&section);
	printf("\nenter row of your entered section : ");
	scanf("\n%f",&row);
    printf ("Enter any one operator p,m,d,c : ");
    scanf("%f", &basicoperator);
    
    basicoperator= 'p';
    p = 'bookgern';
	bookgern = section+row;
	basicoperator= 'm';
    m = 'bookgern';
	bookgern = section-row;
	basicoperator= 'd';
    d = 'bookgern';
	bookgern = section/row;
	basicoperator= 'c';
    c = 'bookgern';
	bookgern = section*row;
	 
	 
    if (bookgern>=9 && bookgern<=10)
    {
    	printf("Geostritegic studies");
    }
    else if (bookgern>=11 && bookgern<=20)
	{
			printf("encyclopedia");
	}
	else if (bookgern>=21 && bookgern<=30)
	{
		printf("islamic studies");
	}
		else if (bookgern>=31 && bookgern<=40)
	{
		printf("1st & 2nd year intermediat physics");
	}
		else if (bookgern>=41 && bookgern<=50)
	{
		printf("1st & 2nd year chemistry");
	}
		else if (bookgern>=51 && bookgern<=60)
	{
		printf("Pakistan studies");
	}
		else if (bookgern>=61 && bookgern<=70)
	{
		printf("Urdu Adab");
	}
		else if (bookgern>=71 && bookgern<=80)
	{
		printf("Zology");
	}
		else if (bookgern>=81 && bookgern<=90)
	{
		printf("Botany");
    }
    	else if (bookgern>=91 && bookgern<=100)
	{
		printf("Economics");
	}
	    else
	{
		printf("wrong command");
	}
	getch();
}
