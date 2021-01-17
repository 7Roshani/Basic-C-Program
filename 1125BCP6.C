#include<stdio.h>
#include<conio.h>
void main()
{
	int amt;
	int com;
	clrscr();
	printf("Please enter amount which is multiple of 100");
	scanf("%d",&amt);
	if(amt<=500)
	{
		com=amt/500;
		printf("you goat %d note of 500Rs\n",com);
	       //	return 100;
	}
	else
	{
		if(amt>500 && amt<=2000)
		{
			com=amt/2000;
			printf("you goat %d note of 2000Rs	\n",com);
		}
		else
		{
			printf("Please enter multiplay of 100");
		}
	}
	getch();
}