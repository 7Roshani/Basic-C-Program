#include<stdio.h>
#include<conio.h>
void main()
{
	int a[5],S=0,i;
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
	printf("\nAddition of all elements \n");
	for(i=0;i<5;i++)
	{
		S=S+a[i];
	}
	printf("%d",S);
	getch();
}