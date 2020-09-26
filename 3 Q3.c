#include<stdio.h>
int main()
{
            int a,p;
            printf("enter a year");
            scanf("%d",&a);

            p=a%4;
            if(p==0)
                        printf("leap year");
            else
                        printf("non leap year");
            return 0;

}
