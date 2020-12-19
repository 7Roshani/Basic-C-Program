#include<stdio.h>
#include<conio.h>
#include<string.h>
void showdata(struct EMP E);
struct EMP
{
 char name[30];
 char post[40];
 float salary,id;
}e1;
void main()
{
clrscr();
printf("please enter employee name designation id and salary");
scanf("%s%s%d%d",&e1.name,&e1.post,&e1.id,&e1.salary);
showdata(e1);
getch();
}
void showdata(struct EMP E)
{
printf("\nGiven Employee Data\nname:-%s\ndesignation:-%s\nid:-%d,salary:-%d",E.name,E.post,E.id,E.salary);
}