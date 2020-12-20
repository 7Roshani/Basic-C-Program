#include<stdio.h>
#include<conio.h>
#include<string.h>
void getdata(struct Cust );
void showdata(struct Cust );
struct Cust
{
 char name[3],add[4];
 int id,no;
};
void main()
{
struct Cust c;
clrscr();
getdata(c);
showdata(c);
getch();
}
void getdata(struct Cust C)
{
 printf("enter Department name,address,id and mobile no\n");
 scanf("%s%s%d%d",&C.name,&C.add,&C.id,&C.no);
}
void showdata(struct Cust C)
{
  printf("Given Department data\nname:-%s \n address:-%s \n id:-%d \n mobile no:-%d",C.name,C.add,C.id,C.no);
}