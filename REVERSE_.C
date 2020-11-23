#include<stdio.h>
#include<conio.h>
void main()
{
int num,c1=0,c2=0,c3=0,rev=0;
clrscr();
printf("enter any 3 digit no");
scanf("%d",&num);
if(num!=0)
{
 c1=num%10;
 c1=c1*100;
 c2=num/10;
 c3=c2%10;
 c3=c3*10;
 c2=c2/10;
}
 rev=c1+c3+c2;
 printf("rever of 3 digit no is = %d\n",rev);
if(num==rev)
{
  printf("given no is palindrome\n");
}
else
{
 printf("given no is not palindrome");
}
/* to check addition of armstrong  */
c1=c1/100;
c1=c1*c1*c1;
c3=c3/10;
c3=c3*c3*c3;
c2=c2*c2*c2;
printf("addition of armstrong no is %d",c1+c3+c2);
getch();
}