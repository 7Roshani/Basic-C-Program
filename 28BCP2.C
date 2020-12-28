#include<stdio.h>
#include<conio.h>
void main()
{
	int no,i,flag=0;
	clrscr();
	printf("Please enter no");
	scanf("%d",&no);
	for(i=2;i<no;i++)
	{
		if(no%i==0)
			flag=1;

	}
	if(flag==1)
		printf("Given no is not a prime no");
	else
		printf("Given no is a prime no");
	getch();
}