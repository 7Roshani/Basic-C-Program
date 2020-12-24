#include<stdio.h>
#include<conio.h>
void main()
{
   int no[10],i,S;
   clrscr();
   printf("Please enter any ten no");
   for(i=0;i<10;i++)
   {
       scanf("%d",&no[i]);
   }
   for(i=0;i<10;i++)
   {
     S=S+no[i];
   }
   printf("ten no Sum:-%d and Average:-%d",S,S/10);
   getch();
}