#include <stdio.h>
int message(int);
int main()
{
            int a,x;
            printf("enter a number");
            scanf("%d" , &a);
            x=message(a);
            printf("factorial is %d\n",x);
            return 0;
}
int message(int y)
{
    int i;
    int b=1;
    for(i=1;i<=y;i++)
       {
           b=b*i;
       }
       return b;
}
