#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,i;
printf("\n enter the starting and ending limit:");
scanf("%d %d",&a,&b);
for(i=a;i<=b;i++)
{
if(i%2==0)
{
printf("\n the odd nos are :%d",i);
}
}
getch();
}
