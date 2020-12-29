#include<stdio.h>
#include<conio.h>
void main()
{
	int a[5],i;
	clrscr();
	printf("Please enter elements in array");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Given elements in array");
	for(i=0;i<5;i++)
	{
		printf("\n%d",a[i]);
	}
	printf("\nGiven elements in array in a reverse order\n");
	for(i=4;i>=0;i--)
		{
		printf("%d\n",a[i]);
	}
	getch();
}