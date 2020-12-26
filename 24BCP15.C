#include<stdio.h>
#include<conio.h>
void main()
{
	int  no,i,S=0;
	clrscr();
	printf("Please enter the no till addition u want to check perfect no");
	scanf("%d",&no);
	printf("no which is divided by given no:-");
	for(i=1;i<=no;i++)
	{
	      if(no%i==0)
	      {
		 printf("%d\t",i);
		 S=S+i;
	      }
	}
	printf("\n%d",S);
	getch();
}