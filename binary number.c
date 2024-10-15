#include<stdio.h>
int main ()
{
   int binarynumber;
   int rem,sum=0,placevalue=1;
   printf("enter a binary number = ");
   scanf("%d",&binarynumber);
   while(binarynumber>0)
   {
      rem=binarynumber%2;
      sum+=rem*placevalue;
      binarynumber/=10;
      placevalue*=2;
   }
   printf("decimal number is %d",sum);
}