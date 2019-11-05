#include<stdio.h>
int main()
{
            int a,b,c;
            printf("enter ages of ram ,shyam and ajay");
            scanf("%d,%d,%d",&a,&b,&c);

            if{(a>b>c)&&(b>a>c)}
                        printf("ajay is the youngest");
            if{(a>c>b)&&(c>a>b)}
                        printf("shyam is the youngest");
            if{(b>c>a)&&(c>b>a)}
                        printf("ram is the youjngest");
            return 0;

}
