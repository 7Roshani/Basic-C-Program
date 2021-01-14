#include<stdio.h>
#include<conio.h>
void main()
{
	int empID;
	int hr,min,sec;
	int Month;
	float sal;
	clrscr();
	printf("Please enter the month in which we want salary");
	scanf("%d",&Month);
	printf("Please enter employee ID and working hours,minute and second");
	scanf("%d%d%d%d",&empID,&hr,&min,&sec);
	sal=hr*200+min*3.3+sec*0.5;
	printf("salary of emp for the month of %d is %f$",Month,sal);
	getch();
}