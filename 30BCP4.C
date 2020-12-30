#include<stdio.h>
#include<conio.h>
void main()
{
	int a[3][3],i,j;
	clrscr();
	printf("Please enter elements in 3*3 size array");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("\n Now 2D array\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	getch();
}
