#include<stdio.h>
#include<conio.h>
void main()
{
int n,on,rem,r=0;
printf("\n enter the number:");
scanf("%d",&n);
on=n;
while(on!=0)
{
rem=on%10;
r+=rem*rem*rem;
on/=10;
}
if(r==n)
{
printf("\n armstrong no",n);
}
else
printf("\n not a armstrong no",n);
}
