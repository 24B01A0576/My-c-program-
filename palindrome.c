#include<stdio.h>
void main ()
{
   int num , no , i , rem , reverse=0;
   printf("enter the number=");
   scanf("%d",&num);
   no=num;
   while(num>0)
   {
      rem=num%10;
      reverse=reverse*10+rem;
      num=num/10;
   }
   printf("reversed number is %d",reverse);
   if (no==reverse)
   {
      printf("number is palindrome");
   }
   else
   {
      printf("number is not palindrome:");
   }
}