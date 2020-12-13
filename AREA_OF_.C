#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
float a,pi=3.14,r,h,V;
clrscr();
/* to find area of cone */
printf("enter radius and height of cone");
scanf("%f%f",&r,&h);
a=pi*r*(r+sqrt(h*h+r*r));
printf("area of cone %f",a);
/* to find volume of cone */
V=(1/3)*a*h;
printf("volume of cone %f \n",V);
getch();
}