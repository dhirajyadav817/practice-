#include<stdio.h>
#include<conio.h>
void main()
{
int bs;
clrscr();
printf("enter basic salary\n");
scanf("%d",&bs);
if(bs>5000)
{
printf("Bonus is 500");
}
else
{
printf("no bonus");
}
getch();
}