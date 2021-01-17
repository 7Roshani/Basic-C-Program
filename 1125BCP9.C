#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	float a,b,c,X,sq1,sq;
	clrscr();
	printf("enter value of a,b and c");
	scanf("%f%f%f",&a,&b,&c);
	sq1=b*b-4*a*c;
	if(sq1>0)
	{
		sq = sqrt(sq1);
		X=(-b+sq)/2*a;
		printf("\n value of X %f",X);
	}
	else
	{
		printf("Bhaskara's formula not posible");
	}
       //	printf("value of bhaskara's formula %f",sq1);
	getch();
}
