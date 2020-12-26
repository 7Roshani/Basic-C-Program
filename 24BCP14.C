#include<stdio.h>
#include<conio.h>
void main()
{
   int no,i,S=0,n;
   clrscr();
   printf("Please enter the no till you want odd no");
   scanf("%d",&no);
   printf("Square of no:-  ");
   for(i=1;i<=no;i++)
   {            n=i*i;
		printf("%d\t",n);
		S=S+i;
   }
   printf("\n and theire sum %d",S);
   getch();
}