#include<stdio.h>
#include<stdio.h>
#include<math.h>
void main()
{
	int Dis;
	int Xpo1,Xpo2,Ypo1,Ypo2;
	clrscr();
	printf("please enter X and Y co-ordinate of 2 point");
	scanf("%d%d%d%d",&Xpo1,&Xpo2,&Ypo1,&Ypo2);
	Dis=sqrt((Xpo2-Xpo1)*(Xpo2-Xpo1)+(Ypo2-Ypo1)*(Ypo2-Ypo1));
	printf("Distance between 2 point %d",Dis);
	getch();
}