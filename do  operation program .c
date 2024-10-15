#include<stdio.h>
void main ()
{
   char opt , op ;
   int n1,n2;
   do
   {
      printf("enter your operation(+,-,*,/):");
      scanf("%c",&op);
      printf("\n enter two values =");
      scanf("%d%d",&n1,&n2);
      switch(op)
      {
         case'+':
           printf("%d+%d=%d",n1,n2,n1+n2);
         break ;
         case'-':
           printf("%d-%d=%d",n1,n2,n1-n2);
         break;
         case'*':
           printf("%d*%d=%d",n1,n2,n1*n2);
         break;
         case'/':
           printf("%d/%d=%d",n1,n2,n1/n2);
         break;
         default:
           printf("wrong input");
      }
      printf("\n do you want to continue:(y/n):");
      scanf("%c",&opt);
   }while(opt=='y');
}