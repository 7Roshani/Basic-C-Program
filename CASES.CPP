#include<stdio.h>
#include<conio.h>
void main()
{
int num1,num2,add,sub,mul;
float div;
char a;
clrscr();
printf("Given Menu\n");
printf("Press + for addition\n Press - for Substraction\n Press * for Multiplication\n Press \ for Division \n ");
scanf("%c",&a);
switch(a)
{
 case '+':
	  printf("enter any two number");
	  scanf("%d%d",&num1,&num2);
	  add= num1+num2;
	  printf("Addition is = %d\n",add);
 break;
 case '-':
	  printf("enter any two number");
	  scanf("%d%d",&num1,&num2);
	  sub= num1-num2;
	  printf("Substraction is = %d\n",sub);
 break;
 case '*':
	  printf("enter any two number");
	  scanf("%d%d",&num1,&num2);
	  mul= num1*num2;
	  printf("Multiplication is = %d\n",mul);
 break;
 case '/':
	  printf("enter any two number");
	  scanf("%d%d",&num1,&num2);
	  div= num1/num2;
	  printf("division is = %f\n",div);
 break;

 default: printf("Please enter valid choice");

}
getch();
}