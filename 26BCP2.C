#include<stdio.h>
#include<conio.h>
void main()
{
	int n1,n2,n3;
	clrscr();
	printf("Please enter any three number");
	scanf("%d%d%d",&n1,&n2,&n3);
	if(n1>n2 && n1>n3)
	{
		printf(" %d no. is grater than %d and %d\n",n1,n2,n3);
	}
	else
	{
		if(n2>n3)
		{
			printf("%d no is grater than %d and %d\n",n2,n1,n3);
		}
		else
		{
			printf(" %d no is grater than %d and %d\n",n3,n2,n1);
		}
	}
	getch();
}