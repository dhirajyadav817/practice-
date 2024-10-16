#include <stdio.h>
#include <conio.h>
void power(int *p,int x,int y);
void main()
{
int x,y,p;
clrscr();
printf("enter a two number:");
scanf("%d%d",&x,&y);
power(&p,x,y);
printf("the power of this number %d",p);
getch();
}
void power(int *p,int x,int y)
{
int i;
*p=1;
for(i=0;i<y;i++)
{
*p=(*p)*x;
}

}
    