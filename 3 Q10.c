#include<stdio.h>
int main()
{
            
            //initializing
            
            
            float a,b ;
            int c;
            printf("enter two numbers\n");
            scanf("%f%f",&a,&b);
            printf("enter choice \n");
            printf("1.) Addition \n 2.) Subtraction \n 3.) Multiply \n 4.) Divide \n");

             //reading
            scanf("%d",&c);
            
            //switch
            switch (c)
            {case 1 : printf("sum is %f",a+b);
            break;
            case 2:printf("sub is %f",a-b);
            break;
            case 3: printf(" multiplication is %f",(a*b));
            break;
            case 4 : printf("division is %f",a/b);
            break;
            default : printf("nikal, chal pehli fursat me nikal");         //don't write like this , delete it
            }
                        return 0;           //returning 0
}
