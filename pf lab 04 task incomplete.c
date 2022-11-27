#include<stdio.h>
#include<conio.h>

int main()
{
	printf("\t\t\t\t\t\tA Student's Percentage,Grade & Remarks");
	float urdu,islamiat,maths,english,physics,chemistry,total,obtain,totalmarksofpartoneandtwo;
	printf("\nenter your urdu marks : ");
	scanf("%g",&urdu);
	printf("\nenter your islamiat marks : ");
	scanf("%g",&islamiat);
	printf("\nenter your maths marks : ");
	scanf("%g",&maths);
	printf("\nenter your english marks : ");
	scanf("%g",&english);
	printf("\nenter your physics marks : ");
	scanf("%g",&physics);
	printf("\nenter your chemistry marks : ");
	scanf("%g",&chemistry);
	
	total = 1100;
	
	obtain=urdu+islamiat+maths+english+physics+chemistry;
    totalmarksofpartoneandtwo=obtain*2;
    
	float per;
	
	per = totalmarksofpartoneandtwo/total*100.0;
	printf("\nabove subjects percentange : %f\n",per);
	
	if (per>=80)
	{
		printf("he or she's Grade is A1");
	}
	else if (per>=70)
	{
		printf("he or she's Grade is A");
	}
	else if (per>=60)
	{
		printf("he or she's Grade is B");
	}
	else if (per>=50)
	{
		printf("he or she's Grade is C");
	}
	else if (per<=50)
	{
		printf("he or she's Grade is D");
	}
	else 
	{
		printf("he or she is failed");
	}
	getch ();	
}


