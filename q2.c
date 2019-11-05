#include<stdio.h>
int main()
{
  int a[5]={1,2,3,4,5},i;
  for(i=0;i<=4;i++)
  {
      a[i]=a[4-i];

    printf("%d\n",a[i]);
  }
  return 0;
}
