#include<stdio.h>
#include<conio.h>

int main()
{
	printf("\t\t\t\t\t\tMARKSHEET");
	float physics,islmaiat,history,english,programming,add,per;
	printf("\nEnter the values of Five subjects:");
	scanf("%f %f %f %f %f",&physics,&islmaiat,&history,&english,&programming);
	
    printf("the marks of physics : %f\n",physics);
	printf("the marks of islmaiat : %f\n",islmaiat);
	printf("the marks of history : %f\n",history);
	printf("the marks of english : %f\n",english);
	printf("the marks of programming : %f\n",programming);
	
	add = physics+islmaiat+history+english+programming;
	printf("the obtained marks of Five subjects %f\n",add);
	
	per = (physics+islmaiat+history+english+programming) / 5.0;
	printf("the percentage of 5 subjects: %f\n",per);
	return 0;
}
