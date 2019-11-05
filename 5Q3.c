#include<stdio.h>
int main()
{
            int a,b,i,p;
            printf("enter 2 no.");
            scanf("%d %d",&a,&b);
            p=a;
            for (i=1;i<b;i++)
            {

                        a=p*a;
            }
            printf("%d",a);
            return 0;


}
