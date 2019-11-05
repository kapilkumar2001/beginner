#include<stdio.h>
int main()
{
            int hours,i=1,outpay;
            while(i<=10)  //as done for 10 peoples
            {
                        printf("enter no. of hours worked");
                        scanf("%d",hours);

            }
            if(hours>40)
                  {

                        outpay=(40-hours)*12;
                        printf("outpay is %d",outpay);
                  }
                  else{
                        printf("get the fuck out of here\n");

                  }
                        i++;
                        return 0;


}
