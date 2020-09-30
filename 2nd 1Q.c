#include<stdio.h.>              //including standard io library
int main()                      //initializing main function
{
    int a,b,c,d,e,f,g;              
    printf("enter 5 digit no");
    scanf("%d",&a);                   //reading 5 digit number

    a=(b*10000)+(c*1000)+(d*100)+(e*10)+f;
    scanf("%d,%d,%d,%d,%d",&b,&c,&d,&e,&f);
    g=b+c+d+e+f;
    printf("sum of digits is=%d\n",g);
}
