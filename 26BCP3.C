#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	float sub1,sub2,sub3,T;
	clrscr();
	printf("Please eneter three subject mark");
	scanf("%f%f%f",&sub1,&sub2,&sub3);
	T=sub1+sub2+sub3;
	printf("Total mark:-%.2f and Percentage %.2f",T,(T/300)*100);
	getch();
}