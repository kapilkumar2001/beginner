#include<stdio.h>
int main()
{
int pos,neg,zero,a;
char ans='y';
pos=0;
neg=0;
zero=0;
while(ans=='y')
{
            printf("enter the number\n");
            scanf("%d",&a);
if(a==0)
zero++;
if(a<0)
neg++;
if(a>0)
            pos++;
printf("do you want to continue\n");
scanf("%c",&ans);
}
printf("positivenumber%d",pos);
printf("negative %d",neg);
printf("zero%d",zero);
return 0;
}
