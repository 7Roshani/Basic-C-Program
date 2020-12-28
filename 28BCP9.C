#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char str[56];
	clrscr();
	printf("Please enter the string");
	scanf("%s",&str);
	strrev(str);
	printf("reverse of string %s",str);
	getch();
}