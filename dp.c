#include<stdio.h>
int main()
{
char x='A',y='a';
int i=65,j=97;
while(i<=90)
{
printf("the ascii value of %c is%d\n",x,x);
i++;
x++;
}
while(j<=122)
{
            printf("the ascii value of %c is %d\n",y,y);
            j++;
            y++;
}
return 0;
}
