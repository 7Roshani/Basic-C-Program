#include<stdio.h>
#include<conio.h>

struct student
{
char name[50];
char  add[100];
int RN;
};

int main()
{
struct  student S;
clrscr();
printf("\n enter student name:- \n ");
scanf("%s",&S.name);
printf("\n enter student address:-  \n");
scanf("%s",&S.add);
printf("\n enter student RN:- \n");
scanf("%d",&S.RN);
printf("\n Given Student\n Name :- %s \n Address :- %s \n Roll no:- %d\n",S.name,S.add,S.RN);
getch();
}