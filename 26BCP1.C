#include<stdio.h>
#include<conio.h>
void main()
{
	int n1,n2;
	clrscr();
	printf("Please enter any 2 no");
	scanf("%d%d",&n1,&n2);
	if(n1>n2)
	{
		printf(" %d no. is grater than %d\n",n1,n2);
	}
	else
	{
		if(n2>n1)
		{
			printf("%d no is grater than %d\n",n2,n1);
		}
		else
		{
			printf("no is equal");
		}
	}
	getch();
}