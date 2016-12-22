#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c,i;
printf("\n enter the table and the limit:");
scanf("%d %d",&a,&b);
for(i=1;i<=b;++i)
{
c=a*i;
printf("\n %d*%d=%d",a,i,c);
}
getch();
}
