#include<stdio.h>
void  txt(char x,int y);
int main()
{
            int h,i;
            scanf("%d",&h);
            txt(' ',h-1);
            printf("*\n");
            for(i=1;i<h;i++)
            {
                        txt(' ',h-i-1);
                        printf("*");
                        txt(' ',2*i-1);
                        printf("*\n");

            }

}
void txt(char x,int y)
{
            for(int i=1;i<=y;i++)
            {
                        printf("%c",x);
            }
}
