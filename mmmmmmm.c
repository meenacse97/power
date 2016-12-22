#include<stdio.h>
#include<conio.h>
int main()
{
int a,b,flag,i;
printf("\n enter the starting and ending limit:");
scanf("%d %d",&a,&b);
printf("\n the prime no between%d and %d",a,b);

        while(a<b)
            {
                    flag=0;

for(i=2;i<=a/2;++i)
{
if(a%i==0)
{
flag=1;
break;
}
}
if(flag==0)
printf("\n%d",a);
++a;
}
return 0;
}


