#include<stdio.h>
#include<conio.h>
void main()
{
    int i,n,f=1;
    clrscr();
    printf("Please enter number to fctorial");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
       f=f*i;
    }
    printf("Fact=%d",f);
    getch();
}