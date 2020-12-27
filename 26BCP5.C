#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char ch;
	clrscr();
	printf("Please enter character\n");
	scanf("%c",&ch);
	if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
		printf("chracter is ovwel");
	else
		printf("Non vowel");
	getch();
}