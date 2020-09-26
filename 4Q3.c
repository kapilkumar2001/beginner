#include<stdio.h>
int main()
{
            int a,b,c;
            printf("enter sides of triangle");
            scanf("%d,%d,%d",&a,&b,&c);

            if((a+b-c>0)&&(a+b-a>0)&&(c+b-a>0))
                        printf("valid");
            else
                        printf("invalid");
             return 0;
}
