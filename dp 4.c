#include<stdio.h>
int main()
{
int a,i=1,b=1;
printf("number");
scanf("%d",&a);
while(i<=a)
{
b=b*i;
i++;
}
printf("factorial=%d",b);
return 0;
}
