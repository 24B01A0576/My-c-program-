#include<stdio.h>
void main ()
{
   int num,n,i,sum=0;
   printf("enter a number= ");
   scanf("%d",&num);
   for(i=1;i<=(n-1);i++)
   {
      if(n%i==0)
      sum==sum+i;
   }
   if(sum==num)
   printf("\n %d is a perfect number",num);
   else
   printf("\n %d is not a perfect number",num);
}