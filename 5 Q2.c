#include<stdio.h>
int main()
{
           int a,i,l=1;
           printf("enter the no.");
           scanf("%d",&a);

           for(i=1;i<=a;i++)
           {
                       l=l*i;

           }
           printf("factorial of no is %d",l);
             return 0;
}
