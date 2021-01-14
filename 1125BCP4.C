#include<conio.h>
#include<stdio.h>
void main()
{
	float BikeCon;
	int BikeDistant;
	float travel,fuleCns;
	clrscr();
	printf("Please enter Bike Distant and Bike travel in Km and Bike fule consume");
	scanf("%d%f%f",&BikeDistant,&travel,&fuleCns);
	BikeCon= BikeDistant/fuleCns ;
	printf("Bike average consumption %.2f",BikeCon);
	getch();
}