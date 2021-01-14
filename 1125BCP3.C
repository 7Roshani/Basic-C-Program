#include<stdio.h>
#include<conio.h>
void main()
{
	int n1,n2,n3;
	clrscr();
	printf("Printf enter any 3 no");
	scanf("%d%d%d",&n1,&n2,&n3);
	if(n1>n2 && n1>n3)
	{
		printf("%d is grater no",n1);
	}
	else
	{
			if(n2>n3)
			{
				printf("%d is grater no",n2);
			}
			else
			{
				printf("%d is grater",n3);
			}
	}
	getch();
}