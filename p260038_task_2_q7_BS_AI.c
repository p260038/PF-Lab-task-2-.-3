#include<stdio.h>
int main()
{
int sub1,sub2,sub3,total;
float average;
printf("Enter Marks of 3 subject out of 100\n");
printf("Enter marks of 1st subject=\n");
scanf("%d",&sub1);
printf("Enter marks of 2nd subject=\n");
scanf("%d",&sub2);
printf("Enter marks of 3rd subject=\n");
scanf("%d",&sub3);
total=sub1+sub2+sub3;
average=(float)total/3;
printf("Total marks=%d\n",total);
printf("Average=%.2f\n",average);
return 0;
}