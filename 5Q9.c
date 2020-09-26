#include<stdio.h>
int main()
{int a[5],max=a[0],min=a[0],r,i,j;
            printf("enter 5 no.");

            for(i=0;i<5;i++)
            {scanf("%d",&a[i]);}

            for(j=0;j<5;j++)
            {
            if(a[i]>max)
            {
                        max=a[i];
            }
            if(a[i]<min)
            {
                        min=a[i];
            }
            }
            r=max-min;
            printf("range is %d",r);
            return 0;


}
