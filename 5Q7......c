#include<stdio.h>
int main()
{

            int a,p[a],i,j,n=0,l=0;
            printf("enter no.of no. to write");
            scanf("%d",&a);
            printf("enter no.s");
            for(i=0;i<a;i++)
            {
            scanf("%d",&p[i]);
            }
            for(j=0;j<=a;j++)
            {
                        if(p[j]>0)
                                    n=n+1;

                        if(p[j]<0)
                                    l=l+1;
            }
            printf("no of positive is %d and no of negetive is %d",n,p);

}
