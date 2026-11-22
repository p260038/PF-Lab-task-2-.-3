#include<stdio.h>
int main()
{
int hr,dis;
float velocity;
printf("Enter the hours travelled=\n");
scanf("%d",&hr);
printf("Enter the distance travelled=\n");
scanf("%d",&dis);
velocity=dis/hr;
printf("Average Speed in kilometer per hour is=%.2f",velocity);
return 0;




}