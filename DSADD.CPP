#include<stdio.h>
#include<conio.h>
#include<string.h>
void getdata(struct Dep );
void showdata(struct Dep );
struct Dep
{
 int id;
 char name[3];
};
void main()
{
struct Dep d;
clrscr();
getdata(d);
showdata(d);
getch();
}
void getdata(struct Dep D)
{
 printf("enter Department id and name\n");
 scanf("%d%s",&D.id,&D.name);
}
void showdata(struct Dep D)
{
  printf("Given Department data\n id:-%d\nname:-%s",D.id,D.name);
}