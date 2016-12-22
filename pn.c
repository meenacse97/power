#include<stdio.h>
#include<conio.h>
void main()
{
int n,f=0,i;
printf("\n enter the number:");
scanf("%d",&n);
for(i=2;i<=n/2;i++)
{
if(n%i==0)
{
f=1;
break;
}
}
if(f==0)
{
printf("\n  it is prime");
}
else
printf("\n it is not a prime");
}
