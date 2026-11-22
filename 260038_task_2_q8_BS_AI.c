#include<stdio.h>
int main()
{
float value,diff;
int convert;
printf("Enter a float value between -1000 to 1000=\n");
scanf("%f",&value);
convert =(int)value;
diff=value-convert;
printf("Float Value entered=%.2f\n",value);
printf("Convert interger=%d\n",convert);
printf("Difference=%.2f\n",diff);

return 0;



}