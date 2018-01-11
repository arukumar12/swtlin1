#include<stdio.h>
#include<conio.h>
void main()
{
int count=0;n;
printf("enter a digit");
scanf("%d",&n);
while(n!=0)
{
n=n%10;
count=count+1;
n=n/10;
}
printf("\n the total no of digits are %d",count);
}
