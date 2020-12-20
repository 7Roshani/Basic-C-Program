#include<stdio.h>
#include<conio.h>
#include<string.h>
void showdata(struct Prod );
struct Prod
{
 char name[4];
 int id;
 float  rate,quantity;
}P1;
void main()
{
clrscr();
printf("Please enter Product name,id,rate,quantity\n");
scanf("%s%d%f%f",&P1.name,&P1.id,&P1.rate,&P1.quantity);
showdata(P1);
getch();
}
void showdata(struct Prod P)
{
printf("Given Product detail\n name:-%s\nid:-%d\nrate:-%f\nquantity:-%f\n",P.name,P.id,P.rate,P.quantity);
}

