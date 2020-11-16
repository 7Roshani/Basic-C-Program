#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int num1,num2,Add,Sub,Mul;  float Div;
printf("enter first number");
scanf("%d",&num1);
printf("enter secound number");
scanf("%d",&num2);
Add=num1+num2;
printf("Addition of two number is=%d\n",Add);
Sub=num1-num2;
printf("Substraction of two number is=%d\n",Sub);
Mul=num1*num2;
printf("Multiplication of two number is=%d\n",Mul);
Div=num1/num2;
printf("Division of two number is=%f",Div);
getch();
}