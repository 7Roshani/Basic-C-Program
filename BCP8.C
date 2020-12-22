#include<stdio.h>
#include<conio.h>
void main()
{
   int num,i,R;
   clrscr();
   printf("enter number u want table that umber");
   scanf("%d",&num);
   for(i=1;i<=10;i++)
   {
      R=num*i;
      printf("\n %d",R);
   }
   getch();
}