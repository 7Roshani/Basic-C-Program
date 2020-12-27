#include<stdio.h>
#include<conio.h>
void main()
{
	int i;
	printf("using for loop");
	for(i=1;i<=10;i++)
	{
		printf("\n %d \n",i);
	}
	printf("using while loop");
	i=1;
	while(i<=10)
	{
		printf("\n %d \n",i);
		i++;
	}
	printf("using do while loop");
	i=1;
	do
	{
		printf("\n %d \n",i);
		i++;
	}while(i<=10);
	getch();
}