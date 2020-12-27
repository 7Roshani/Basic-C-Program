#include<stdio.h>
#include<conio.h>
struct customer
{
	char  id[100];
	char  name[500];
	char  add[500];
	char  mno[100];
};
void showcust(struct customer cust[5])
{
	int i;
	for(i=0;i<5;i++)
	{
		printf("\n  id:-%s",cust[i].id);
		printf("\n  name=%s",cust[i].name);
		printf("\ address:-%s",cust[i].add);
		printf("\n mno:- %s",cust[i].mno);
	}
}
void main()
{
	struct customer cust[5];
	int i;
	clrscr();
	for(i=0;i<5;i++)
	{
		printf("Please enter customer id, name, address and mobile no");
		scanf("%s%s%s%s",&cust[i].id,&cust[i].name,&cust[i].add,&cust[i].mno);
	}
	showcust(cust);
	getch();
}