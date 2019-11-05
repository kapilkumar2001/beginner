#include<stdio.h>
int main()
{
            float a,b ;
            int c;
            printf("enter two numbers\n");
            scanf("%f%f",&a,&b);
            printf("enter choice \n");
            printf("1.) Addition \n 2.) Subtraction \n 3.) Multiply \n 4.) Divide \n");

            scanf("%d",&c);
            switch (c)
            {case 1 : printf("sum is %f",a+b);
            break;
            case 2:printf("sub is %f",a-b);
            break;
            case 3: printf(" multiplication is %f",(a*b));
            break;
            case 4 : printf("division is %f",a/b);
            break;
            default : printf("nikal, chal pehli fursat me nikal");
            }
                        return 0;
}
