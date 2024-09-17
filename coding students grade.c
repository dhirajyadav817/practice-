# include<stdio.h>
#include<conio.h>
void main()
{
float p;
clrscr();
printf("enter percentage\n");
scanf("%f",&p);
if(p>=75)
{
printf("the class is distinction");
}
else if(p>=60)
{
printf("the class is first");
}
else if(p>=50)
{
printf("the class is second");
}
else if(p>=40)
{
printf("the class is pass");
}
else if(p>=35)
{
printf("the class is fail");}
getch();
}