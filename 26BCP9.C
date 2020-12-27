#include<stdio.h>
#include<conio.h>
void main()
{
	int no,i,flag=0;
	clrscr();
	printf("Please enetr n	umber");
	scanf("%d",&no);
	for(i=2;i<no;i++)
	{
		if(no%i==0)
		{
			flag=1;
			break;
		}
	}
	if(flag==0)
	{
		printf("no is a prime");
	}
	else
	{
		printf("no is not prime");
	}
	getch();
	}