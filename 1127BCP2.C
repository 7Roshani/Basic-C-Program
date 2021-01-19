#include<stdio.h>
#include<conio.h>
void main()
{
	float S=0;
	int i=1,j=0;
	clrscr();
	for(j=2;j<=50;j++)
	{
		if(j%2!=0)
		i=i*2;
		S=1+S+j/i;
	}
	printf("value of formula is %f",S);
	getch();
}