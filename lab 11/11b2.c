#include<stdio.h>
void main()
{
   int i,d,n,count=0;
   printf("Enter number and digit : ");
   scanf("%d,%d",&n,&d);
   for(i=1;n>0;i++)
   {
       if(n%10==d)
       {
       	count = count+1;
       }
     n/=10;
   }
   printf("Frequency of digits = %d",count);
}
