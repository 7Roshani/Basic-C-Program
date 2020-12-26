#include<stdio.h>
#include<conio.h>
void main()
{
   int no,i,S=0;
   clrscr();
   printf("Pleaseenter the no till you want odd no");
   scanf("%d",&no);
   printf("Even no:-  ");
   for(i=1;i<=no;i++)
   {       if(i%2==0)
	   {
		printf("%d\t",i);
		S=S+i;
	   }
   }
   printf("\n and theire sum %d",S);
   getch();
}