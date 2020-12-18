#include<stdio.h>
#include<conio.h>
#include<string.h>
struct customer
{
char name[10];
int id,no;
char add[100];
};
void main()
{
struct customer M;
clrscr();
strcpy(M.name,"Rosh");
strcpy(M.add,"fsdf");
M.id=5;
M.no=368274;
printf("Given customer information\n");
printf("name:- %s\n address:- %s\n ID:-%d\n mno:-%d",M.name,M.add,M.id,M.no);
getch();
}