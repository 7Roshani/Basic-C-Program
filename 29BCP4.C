#include<stdio.h>
#include<conio.h>
void main()
{
	int a[5],c[5],S=0,i;
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
	printf("\n Addition of all elements \n");
	for(i=0;i<5;i++)
	{
		S=S+a[i];
	}
	printf("%d",S);
	printf("\n Now copy array\n");
	for(i=0;i<5;i++)
	{
		c[i]=a[i];
		printf("%d\n",c[i]);
	}
	getch();
	ff}