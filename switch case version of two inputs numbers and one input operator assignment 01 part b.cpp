#include<stdio.h>

int main()
{
	int basicoperator,section,row,booktype,p,m,d,c;
	printf("\nenter library section (must be in numbers!) : ");
	scanf("%d",&section);
	printf("\nenter row of your entered section : ");
	scanf("\n%d",&row);
    printf ("Enter any one operator p,m,d,c : ");
    scanf("%d", &basicoperator);
    
    basicoperator= 'p';
    p = 'booktype';
	booktype = section+row;
	basicoperator= 'm';
    m = 'booktype';
	booktype = section-row;
	basicoperator= 'd';
    d = 'booktype';
	booktype = section/row;
	basicoperator= 'c';
    c = 'booktype';
	booktype = section*row;
	
	switch(booktype/10)
	{
		case 1 :
			printf("Geostritegic studies");
			break;
				case 2:
			printf("encyclopedia");
			break;
				case 3:
			printf("islamic studies");
			break;
				case 4:
			printf("1st & 2nd year intermediat physics");
			break;
				case 5:
			printf("!st & 2nd year chemistry");
			break;
				case 6:
			printf("Pakistan studies");
			break;
				case 7:
			printf("Urdu Adab");
			break;
				case 8:
			printf("Zology");
			break;
				case 9:
			printf("Botany");
			break;
				case 10 :
			printf("Economics");
			break;
				default :
					printf("DEFAULT");	
	}
	return 0;
}
