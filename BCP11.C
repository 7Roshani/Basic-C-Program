#include<stdio.h>
#include<conio.h>
void main()
{
  float K,C;
  clrscr();
  printf("Please enter temperature in kelvin");
  scanf("%f",&K);
  printf("Please enter temperature in celsius");
  scanf("%f",&C);
  K=C+273.15;
  C=K-273.15;
  printf("if u eneter Temp. in kelvin then Temp. in celsius is:-%f\n",C);
  printf("if u eneter Temp. in celsius then Temp. in celsius is:-%f\n",K);
  getch();
}