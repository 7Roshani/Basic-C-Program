#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char name[40];
	float salary;
	int exday;
	float bonus;
	clrscr();
	printf("Note if employee extend, means more than 25days there day then 1 day salary is equal to 100Rs.\n");
	printf("Please enter employee name, salary and day cover");
	scanf("%s%f%d",&name,&salary,&exday);
	if(exday>25)
	{
		exday=exday-25;
		bonus=exday*100;
	}
	printf(" \n bonus = %.2f",bonus);
	printf("\n Empoyee Total salary=%.3f",salary+bonus);
	getch();
}