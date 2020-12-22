#include<stdio.h>
#include<conio.h>
void main()
{
  int num1, num2;
  clrscr();
  printf("Please enter 2 number");
  scanf("%d%d",&num1,&num2);
  printf("\n addition:-%d\nsubtraction:-%d\nmultiplication:-%d\ndivision:-%d\n",num1+num2,num1-num2,num1*num2,num1/num2);
  getch();
}