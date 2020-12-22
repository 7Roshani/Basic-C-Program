#include<stdio.h>
#include<conio.h>
void main()
{
   int n1,c,n2,n3;
   clrscr();
   printf("Please enter 3 no");
   scanf("%d%d%d",&n1,&n2,&n3);
   c=n1+n2;
   printf("1st operation:-%d\n",c*n3);
   printf("2nd operation:-%d\n",n1*n2+n2*n3);
   getch();
}