#include<stdio.h>
int main()
{
int pen,quarter,dime,nickel,pennies;
pen=368;
quarter=pen/25;
pen=pen%25;
dime=pen/10;
pen=pen%10;
nickel=pen/5;
pennies=pen%5;
printf("Quarters=%d\n",quarter);
printf("Dimes=%d\n",dime);
printf("Nickles=%d\n",nickel);
printf("Pennies=%d\n",pennies);
return 0;

}