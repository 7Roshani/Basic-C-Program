#include<stdio.h>
#include<conio.h>
void main()
{
	int a[5],i,t,j;
	clrscr();
	printf("Please enter elements in array");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++)
	{
		for(j=i+1;j<5;j++)
		{
			if(a[i]<a[j])
			{
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}

		}
	}
	printf("Elements in decending order\n");
	for(i=0;i<5;i++)
	{
		printf("%d\n",a[i]);
	}
	getch();
}