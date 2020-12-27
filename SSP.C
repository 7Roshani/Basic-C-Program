#include<stdio.h>
#include<conio.h>
#include<string.h>
void getdata(struct customer *);
void showdata(struct customer *);
struct customer
{
	char name[50],add[50];
	int id,no;
};
void main()
{
	struct customer C;
	clrscr();
	getdata(&C);
	showdata(&C);
	getch();
}
void getdata(struct customer *C)
{
	printf("eneter customer name,address,id and mobile no");
	scanf("%s%s%d%d",&C->name,&C->add,&C->id,&C->no);
}
void showdata(struct customer *C)
{
	printf("customer data\n name:-%s \n address:-%s\n id:-%d\n mobile no:-%d",C->name,C->add,C->id,C->no);
}