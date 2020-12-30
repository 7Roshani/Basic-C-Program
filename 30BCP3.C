#include<stdio.h>
#include<conio.h>
void main()
{
	int a[5],i,FS,SS,j;
	clrscr();
	printf("Please enter elements in array");
	for(i=0;i<5;i++)
	{
			scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++)
	{
		if(a[i]<FS)
		{
			FS=a[i];
		}
	}

	for(i=0;i<5;i++)
	{
		if(a[i]!=FS && a[i]<SS)
		{
			SS=a[i];
		}
	}
	printf("\nSecond smalest element:-%d",SS);
	getch();
}