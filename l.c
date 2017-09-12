#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
printf("/n enter the numbers");
scanf("%d%d%d",&a&b&c);
if(a>b||a>c)
{
printf("\n a is largest");
}
else if(b>a||b>c)
{
printf("/n b is largest");
}
else
{
printf("/n c is largest");
}
}
