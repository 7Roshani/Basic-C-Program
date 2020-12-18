#include<stdio.h>
#include<conio.h>
#include<string.h>
struct Prod
{
  int Pid;
  char Pname[50];
  float Pprice,quantity;
};

void main()
{
  struct Prod P;
  clrscr();
  printf("\nPlease enter product ID\n");
  scanf("%d",&P.Pid);
  printf("\n Please enter product name\n");
  scanf("%s",&P.Pname);
  printf("\n please enter product Price\n");
  scanf("%f",&P.Pprice);
  printf("Please enter product quantity");
  scanf("%f",&P.quantity);
  printf("\nProduct Detail\n");
  printf("\n ID:- %d \n name:- %s \n Price:- %.2f\n Quantity:- %f",P.Pid,P.Pname,P.Pprice,P.quantity);
  getch();
}