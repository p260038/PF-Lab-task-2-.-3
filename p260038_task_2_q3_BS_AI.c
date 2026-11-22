#include<stdio.h>
int main()
{
int taxrate;
float salary;

printf("Enter the Tax Rate=\n");
scanf("%d",&taxrate);
printf("Enter the Salary=\n");
scanf("%f,&salary);
float taxpayable=salary*taxrate/100;
float net_salary=salary-taxpayable;
printf("Tax Amount=%.2f\n",taxpayable);
printf("Net salary after tax dedction=%.2f\n",net_salary);
return 0;

}