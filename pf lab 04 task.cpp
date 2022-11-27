#include<stdio.h>
#include<conio.h>

int main()
{
	printf("\t\t\t\t\t\tINTERMEDIATE MARKSHEET");
	float urdu,islamiat,maths,english,physics,chemistry,total,obtain,obtainmarksofpartoneandtwo,per;
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
    obtainmarksofpartoneandtwo=obtain*2;
    printf("\nobtain marks of both part 1 and 2 : %f",obtainmarksofpartoneandtwo);
    per = obtainmarksofpartoneandtwo/total*100.0;
	printf("\nabove subjects percentange : %f\n",per);
	char grade;
	
	if (per>=80 && per<=100)
	{
	    grade='A1';
		printf("\nGrade : %c",grade);
	}
	else if (per>=70)
	{
		grade='A';
		printf("\nGrade : %c",grade);
	}
	else if (per>=60)
	{
		grade='B';
		printf("\nGrade : %c",grade);
	}
	else if (per>=50)
	{
		grade='C';
		printf("\nGrade : %c",grade);
	}
	else if (per<=50)
	{
		grade='D';
		printf("\nGrade : %c",grade);
	}
	else 
	{
		printf("he or she is failed");
	}	
	switch(grade)
	{
	case 'A1':
    printf("\nDivision : First class");
     break;
	case 'A':
	printf("\nDivision : Frist");
	break;
	case 'B':
	printf("\nDivision : Second");
	 break;
	case 'C':
	printf("\nDivision : Third");
	 break;
	case 'D':
	printf("\nDivision : Fourth");
	 break;
	default:
    printf("\nDEFAULT");
}
	getch ();
	
}
