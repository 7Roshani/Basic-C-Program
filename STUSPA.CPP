#include<stdio.h>
#include<conio.h>
#include<string.h>
void showdata(struct stu S);
struct stu
{
char name[40],add[70];
int roll_no,no;
};
void main()
{
 struct stu s1,s2;
 clrscr();
 printf("enter student name,add,roll no and mobile no");
 scanf("%s%s%d%d",s1.name,s1.add,s1.roll_no,s1.no);
 printf("enter student name,add,roll no and mobile no");
 scanf("%s%s%d%d",s2.name,s2.add,s2.roll_no,s2.no);
 showdata(s1);
 showdata(s2);
 getch();
}
void showdata(struct stu S)
{
 printf("\nGiven student data\n name:- %s\naddress:-%s\nroll no:-%d\nmobile no:-%d\n",S.name,S.add,S.roll_no,S.no);
}