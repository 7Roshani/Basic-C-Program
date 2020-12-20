#include<stdio.h>
#include<conio.h>
#include<string.h>
struct student
{
 int rollno;
 char name[5];
};
void main()
{
  struct student *s;
  struct student s1;
  clrscr();
  s=&s1;
  s1.rollno=2;
  strcpy(s1.name,"Rosh");
  printf(" name:-%s \n",s->name);
  printf(" roll no:-%d \n",s->rollno);
  getch();
}
