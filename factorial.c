#include<stdio.h>
int main()
{
            int i,j,space=0;
            for(i=5;i>0;i--)
            {
                        for (j=0;j<i;j++)
                                    printf("*");
                        for(j=0;j<space;j++)
                                    printf(" ");
                        for(j=0;j<i;j++)
                        printf("*");
                        printf("\n");
                        space+=2;
            }
            return 0;
}
