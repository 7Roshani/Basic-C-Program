#include<stdio.h>
#include<conio.h>
struct Department
{
char name[10];
int id;
};
void main()
{
  struct Department D;
  clrscr();
  printf("Please enter Department name\n");
  scanf("%s",&D.name);
  printf("Please enter Department ID");
  scanf("%d",&D.id);
  printf("\n Given Department Detail \n name:- %s \n ID:- %d",D.name,D.id);
  getch();
}