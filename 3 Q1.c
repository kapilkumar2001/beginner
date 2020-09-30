#include<stdio.h>
int main()
{
    int c,s,p;
    printf("enter cost price and selling price");
    scanf("%d,%d",&c,&s);

    p=s-c;
    //commenting for hacktoberfest

    if(p>0)
    {
    printf("profit\n");
    printf("profit=%d",p);
    }
    else
    {
        printf("loss\n");
        printf("loss=%d",p);
    }
    return 0;
}
