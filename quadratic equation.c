#include<stdio.h>
int main ()
{
   int a,b,c;
   float d,x1,x2;
   printf("enter a,b,c");
   scanf("%d%d%d",&a,&b,&c);
   d=b*b-(4*a*c);
   if(d==0)
   {
      printf("roots are equal");
      x1=x2=-b/(2*a);
      printf("x1=%f",x1);
      printf("x2=%f",x2);
   }
   else 
   {
      if(d>0)
      {
         x1=(b+sqrt(d)/2*a);
         x2=(-b+sqrt(d)/2*a);
         printf("x1=%f",x1);
         printf("x2=%f",x2);
      }
      else
      {
         printf("roots are imaginary");
      }
   }
}