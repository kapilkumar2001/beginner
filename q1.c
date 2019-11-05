#include<stdio.h>
int main()
{
            int p,a[p],i,t;
            printf("enter value of array");
            scanf("%d",&p);
            for(i=0;i<p;i++)
            {
                  t=a[i];
                  a[i]=a[i+1];
                  a[i+1];
                  printf("%d",&a[i]);
            }
            return 0;
}
