#include<stdio.h>
#include<conio.h>
void main()
{
	int no,i;
	float D;
	clrscr();
	printf("Please enter the limit of no");
	scanf("%d",&no);
	for(i=1;i<=no;i++)
	{
		D=i%7;
		if(i%7==0 || D==2 ||  D==3)
		printf("no %d is according to condition\n",i);
	}
	getch();
}