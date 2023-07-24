#include <stdio.h>
#include <stdlib.h>

int main()
{
   1.

   int age;
   printf("HI,HOW OLD ARE YOU?");
   scanf("%d",&age);
   printf("WELCOME %d \n LETS BE FRIENDS!",age );

    2.
    printf("%15d%10d%10d\n",2,4,8);
    printf("%15d%10d%10d\n",3,9,27);
    printf("%15d%10d%10d\n",4,16,64);

    3.
    int dis,time, avgspd;
    printf("enter your travel distance");
    scanf("%d",&dis);
    printf("enter your estimate time ");
    scanf("%d",&time);
    //process
    avgspd=dis/time;
    printf("\n\n");
    printf("your average speed is %d",avgspd);

    //when we use int we have to calculate with integers which is not practical because distance and average speed can get decimal numbers
    //using float or double will be solution

    4.
    float temfar,temcel;
    printf("enter temperature in fahrenheit");
    scanf("%f",&temfar);
    temcel=(5.0/9.0)*(temfar-32.0);
    printf("your temperature in celsius %.2f",temcel);
}


