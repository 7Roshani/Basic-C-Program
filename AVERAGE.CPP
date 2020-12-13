#include<stdio.h>
#include<conio.h>
void main()
{
  int n;
  float w,a,t;
  clrscr();
  printf("enter no of purchase items");
  scanf("%d",&n);
  printf("enter weight of items");
  scanf("%f",&w);
  a=w/n;
  printf("Average value of items=%f ",a);
  getch();
}
