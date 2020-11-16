#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int a,b,c,*i,*j;
printf("enter first number a");
scanf("%d",&a);
printf("enter second number b");
scanf("%d",&b);
a=a+b;
b=a-b;
a=a-b;
printf("after swap number using math operation\n a is %d and b is %d\n",a,b);
c=a;
a=b;
b=c;
printf("swap number using thired veriable\n a is %d and b is %d",a,b);
i= &a;
j= &b;
c=*i;
*i=*j;
*j=c;
printf("swap number using pointer\n a is %d and b is %d",a,b);
getch();
}



