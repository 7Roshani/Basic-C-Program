#include<stdio.h>
#include<conio.h>
void main()
{
	int i,no,S=0;
	clrscr();
	printf("Please enter no");
	scanf("%d",&no);
	printf("Odd no:-  ");
	for(i=1;i<=no;i++)
	{
	    if(i%2!=0)
	    {
		printf("%d\t",i);
		S=S+i;
	    }
	}
	printf("\nAnd there sum:- %d",S);
	getch();
}