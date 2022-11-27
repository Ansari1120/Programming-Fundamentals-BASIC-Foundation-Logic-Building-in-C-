#include<stdio.h>

int main()
{
	float subject1,subject2,subject3,subject4,subject5;
	printf("Enter the marks of total subjects\n");
	scanf("%f %f %f %f %f",&subject1,&subject2,&subject3,&subject4,&subject5);

	per = (subject1 + subject2 + subject3 + subject4 + subject5) / 5.0;

	if (per>=80)
	{
		printf("your Grade is: A1\n");
	}
		else
	{
	if(per>=70)
	{
		printf("your Grade is: A\n");
	}
	    else
	{
	if(per>=60)
	{
		printf("Your Grade is: C\n");
	}
	    else
	{
	printf("you are failed\n");
    }
 }
}
    return 0;
}
