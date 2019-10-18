#include<stdio.h>
void swap(int *x,int *y);
void main()
{
    int a,b,*x,*y;
    x=&a;
    y=&b;
    printf("enter two integers");
    scanf("%d %d",&a,&b);
    swap(x,y);
    printf("%d %d",a,b);
}
void swap(int *m,int *n)
{
    int t;
    t=*m;
    *m=*n;
    *n=t;

}
