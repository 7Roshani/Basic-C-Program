#include<stdio.h>
#include<conio.h>
void main()
{
	int no,n,i;
	clrscr();
	printf("Please enter no");
	scanf("%d",&no);
	printf("Multiplication table are as following\n");
	for(i=1;i<=10;i++)
	{
	    n=no*i;
	    printf("%d\n",n);
	}
	getch();
}