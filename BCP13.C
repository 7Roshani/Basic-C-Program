#include<stdio.h>
#include<conio.h>
void main()
{
  int i;
  clrscr();
  for(i=1;i<=100;i++)
  {
	if(i%2==0)
	{
	    printf("no is even:-%d\n",i);
	}
	else
	{
	   printf("no is odd:-%d\n",i);
	}
  }
  getch();
}