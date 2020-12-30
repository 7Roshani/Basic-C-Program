#include<stdio.h>
#include<conio.h>
void main()
{
	int a[5],i,FL=0,SL=0,j;
	clrscr();
	printf("Please enter elements in array");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++)
	{
		if(a[i]>FL)
		{
			FL=a[i];
		}
	}

	for(i=0;i<5;i++)
	{
		if(a[i]!=FL && a[i]>SL)
		{
			SL=a[i];
		}
	}
	printf("\nSecond larger element:-%d",SL);
	getch();
}