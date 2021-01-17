#include<stdio.h>
#include<conio.h>
void main()
{
	int time,M;
	clrscr();
	printf("enter the time in hr.");
	scanf("%d",&time);
	M=time*60;
	printf("Time in minite only %d\n",M);
	printf("Time in second only %d",M*60);
	getch();
}