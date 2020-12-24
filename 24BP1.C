#include<stdio.h>
#include<conio.h>
void main()
{
   int no[10],i,n;
   clrscr();
   printf("Please enter 10 natural numbers");
   for(i=0;i<10;i++)
   {
      scanf("%d",&no[i]);
   }
   printf("10 natural number\n");
   for(i=0;i<10;i++)
   {
       printf("%d\n",no[i]);
   }
   getch();
}
