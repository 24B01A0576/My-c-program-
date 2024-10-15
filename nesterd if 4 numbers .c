#include<stdio.h>
int main ()
{
   float a,b,c,d,max;
   printf("enter 4 numbers separated by spaces :");
   scanf("%f%f%f%f",&a,&b,&c,&d);
   max=a;
   if(b>max)
   max=b;
   if(c>max)
   max=c;
   if(d>max)
   max=d;
   printf("maximum is %f",max);
}