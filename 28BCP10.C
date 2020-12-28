#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char str[50];
	int i,count=1;
	clrscr();
	printf("Please enter string");
	scanf("%s",&str);
	for(i=1;str[i]!='\0';i++)
	{
		count++;
	}
	printf("length of sting=%d\n",count);
	getch();
}