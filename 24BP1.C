#include<stdio.h>
#include<conio.h>
void main()
{
   int no[10],i,n;
   clrscr();
   printf("Please enter 10 natural numbers");
   for(i=0;i<=10;i++)
   {
      scanf("%d",&no[i]);
   }
   for(i=0;i<=10;i++)
   {
      n=no[i]+i;
   }
   printf("addition on first 10 natural no is :- %d",n);
   getch();
}