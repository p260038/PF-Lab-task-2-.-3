#include<stdio.h>
int main()
{
int a,b,c;
printf("Enter a number\n");
scanf("%d",&a);
printf("Enter another number\n");
scanf("%d",&b);
c=a;
a=b;
b=c;
printf("Value of a=%d\n",a);
printf("Value of b=%d\n",b);
return 0;



}