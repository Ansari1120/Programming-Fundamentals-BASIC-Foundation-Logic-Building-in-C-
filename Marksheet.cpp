#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	printf("\t\t\t\t\t\tMARKSHEET");
	float physics,islmaiat,history,english,programming,total,obtained,avg,per;
	printf("\nEnter your marks in physics:");
	scanf("%f",&physics);
	printf("\nEnter your marks in islmaiat:");
	scanf("%f",&islmaiat);
	printf("\nEnter your marks in history:");
	scanf("%f",&history);
	printf("\nEnter your marks in english:");
	scanf("%f",&english);
	printf("\nEnter your marks in programming:");
	scanf("%f",&programming);
	
	total = 550;
	
	obtained = physics+islmaiat+history+english+programming;
	printf("the obtained marks of Five subjects %f\n",obtained);
	
	avg = obtained / total;
	
	per = avg * 100;
	printf("the percentage of 5 subjects: %f\n",per);
	return 0;
}
