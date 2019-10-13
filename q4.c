#include<stdio.h>
int main()
{
            int a[25],i,
            printf("enter 25 no");
            for(i=0;i<25;i++)
            scanf("%d",&a[i]);

            for(i=0;i<25;i++)
            {
                        if(a[i]>0)
                        i=i+1;
            }
            return 0;
}
