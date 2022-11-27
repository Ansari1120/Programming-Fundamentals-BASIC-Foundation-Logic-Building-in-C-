#include<stdio.h>

int main()
{
	printf("\t\t\t\t\t\tStudent Grading through marks");
	char Name[13];
	printf("\n\t\t\t\t\t\t\twrite student Name:");
	scanf("%s",&Name);
	float subject1,subject2,subject3,subject4,subject5,total,obtained,avg,per;
	printf("Enter the marks of total subjects\n");
	scanf("%f %f %f %f %f", &subject1, &subject2, &subject3, &subject4, &subject5);
	
	total = 400;
	
	obtained = (subject1 + subject2 + subject3 + subject4 + subject5);
	
	avg = total/obtained;
	per = avg*100.0;
	
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
    printf("the above Grade got by:");
    printf("%s",Name);
    
    return 0;
}
