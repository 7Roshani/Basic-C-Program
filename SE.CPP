#include<stdio.h>
#include<conio.h>
#include<string.h>
struct employee
{
char name[10];
int eno;
char post[10];
float salary;
};

void main()
{
struct employee E;
clrscr();
strcpy(E.name,"Rosh");
strcpy(E.post,"AR");
printf("\n our Employee\n name:- %s \n eno:- %d \npost:-%s\n salary:-%f",E.name,E.eno,E.post,E.salary);
getch();
}