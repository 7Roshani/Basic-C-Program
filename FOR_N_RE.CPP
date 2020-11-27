#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int num,no,r,rev=0,pal=0;
printf("enter any number");
scanf("%d",&num);
no=num;
for(int i=no;i>0;)
{
  r = i%10;
  rev =rev*10+r;
  i =i/10;
  pal= pal+ r*r*r;
}
printf("reverse of number is %d\n",rev);
if(num==rev)
  printf("given number is Armstrog\n");
else
  printf("given no is not armstrong\n");
printf(" palindrome no is %d  ", pal);
getch();
}