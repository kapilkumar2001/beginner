#include<stdio.h>
int main()
{
            int a,p;
            printf("enter a year");
            scanf("%d",&a);

            p=a%7;

            if(p=0)
                        printf("monday\n");
           if(p=1)
                        printf("tuesday\n");
             if(p=2)
                        printf("wednesday\n");
             if(p=3)
                        printf("thrusday\n");
             if(p=4)
                        printf("friday\n");
             if(p=5)
                        printf("saturday\n");
             if(p =6)
                        printf("sunday\n");
            return 0;

}
