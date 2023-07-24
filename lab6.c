#include <stdio.h>
#include <stdlib.h>

int main()
{
  1.
  1.1
   int x=1;
    while(x<=100)
    {
        printf("%d ",x);
        x++;
    }

    1.2
    int x=1;
    do
    {
        printf("%d ",x);
        x++;
    }while (x<=100);


    1.3
    {
    int x;
    for(x=1;x<=100;x++)
    {
        printf("%d ",x);
    }

  2.
    int i;
    float marks,avg,total=0;
    for (i=1;i<=10;i++)
    {
        printf("Enter your mark ");
        scanf("%f",&marks);
        total=total+marks;
    }
    avg=total/10;
    printf("Your total is %f \n",total);
    printf("Your average is %f \n",avg);

    if(avg<50)
        printf("  FAIL! ");
    else
        printf("  PASS! ");

    3.
    int num,temp,total=1;
    printf("Enter the number ");
    scanf("%d",&num);

    if(num==0)
    {
        printf("Factorial of %d is 1",num);
    }
    else
    {
        temp=num;
        while(temp!=0)
        {
            total=total*temp;
            temp--;
        }
      printf("Factorial of %d id %d ",num,total);
    }

    4.
    int num,digit,sum=0;
    printf("Enter a number ");
    scanf("%d",&num);

    while(num>0)
    {
        digit=num%10;
        sum=sum+digit;
        num=num/10;
    }
    printf("The sum of the digits is %d \n",sum);

    5.
    int reversedn=0,no,remin;
    printf("enter a number");
    scanf("%d",&no);
    do{
        remin=no%10;
        reversedn=reversedn*10+remin;
        no=no/10;
        printf("reversed number is %d",reversedn);
        }while(no!=0);

     6.
        int num,exp,ans=1;
    printf("enter a base value and exponent");
    scanf("%d %d",&num,&exp);
    while(exp>0)
    {
        ans=ans*num;
        exp--;
    }
    printf("answer is %d",ans);
    if(exp=0)
        printf("answer is 1");

     7.
        int n = 10, fib1 = 0, fib2 = 1, nextTerm;
        printf("Fibonacci Sequence: ");
        for (int i = 1; i <= n; ++i) {
        printf("%d, ", fib1);
        nextTerm = fib1 + fib2;
        fib1 = fib2;
        fib2 = nextTerm;

        8.
    int no,digit,temp,sum=0;
    printf("eneter a number");
    scanf("%d",&no);
     temp=no;
    do{
        digit=temp%10;
        sum=sum+digit*digit*digit;
        temp/10;
    }while(temp>0);
    if(sum==no)
        printf("%d is armstrong number",no);
    else
        printf("%d is not armstrong number",no);

        9.
    char letter;
    printf("ASCII values for A to Z:");
    for(letter='A';letter<='Z';letter++){
    printf("%c:%d\n",letter,letter);}

    10.
    int x,y;
    for(x=1;x<=5;x++)
    {
        for(y=1;y<=x;y++)
        {
          printf("*");
        }
            printf("\n");
    }




}



}


