#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    1.
    printf("enter two number");
    scanf("%d %d",&n1,&n2);

    if(n1>n2)
       max=n1;
    else
        max=n2;
  printf("highest number is %d", max);

  2.
    int n1,n2,n3,max,least;
    printf("enter three number");
    scanf("%d %d %d",&n1,&n2,&n3);
    if(n1>n2)
        if(n1>n3)
        max=n1;
        else
        max=n3;
     else
        if(n2>n3)
        max=n2;
        else
        max=n3;
    if(n1<n2)
        if(n1<n3)
        least=n1;
        else
        least=n3;
     else
        if(n2<n3)
        least=n2;
        else
        least=n3;
   printf("highest number is %d", max);
   printf("least number is %d", least);

   3.
   char empname[20];
   float bs,inc,ns;

   printf("enter your name\n");
   scanf("%s",&empname);
   printf("enter your basic salary");
   scanf("%f",&bs);
   if(bs<=5000)
    inc=bs*0.05;
   else if(bs<=10000)
        inc=bs*0.10;
    else
        inc=bs*0.15;
    ns=bs+inc;
    printf("employee name %s \n",empname);
    printf("new salary %.2f",ns);

    4.
   float r;
   printf("enter your radius value");
   scanf("%f",&r);
   printf("diameter: %.2f\n",r*2);
   printf("circumference:%.2f\n",2*M_PI*r);
   printf("area:%.2f",M_PI*r*r);

   5.
   int n1,n2,mod;
    printf("enter 2 numbers");
    scanf("%d %d",&n1,&n2);
    mod=n1%n2;
    if(mod==0)
        printf("%d is multiplication of %d\n",n1,n2);
    else
        printf("%d is not multipliction of %d",n1,n2);

    6.
    .   char A,B,C,a,b,c,0,1,2,$,*,+,/,blank,choise, ;
   printf("choose character between : A B C a b c 0 1 2 $ * + / or the blank character.");
   switch(choise)
   case'A':printf("Integer Equivalent: 65");break;
   case'B':printf("Integer Equivalent: 66");break;
   case'C':printf("Integer Equivalent: 67");break;
   case'a':printf("Integer Equivalent: 97");break;
   case'b':printf("Integer Equivalent: 98");break;
   case'c':printf("Integer Equivalent: 99");break;
   case 0 :printf("Integer Equivalent: 0");break;
   case 1 :printf("Integer Equivalent: 1");break;
   case 2 :printf("Integer Equivalent: 2");break;
   case'$':printf("Integer Equivalent: 36");break;
   case'*':printf("Integer Equivalent: 42");break;
   case'+':printf("Integer Equivalent: 43");break;
   case'/':printf("Integer Equivalent: 47");break;
   case'blank':printf("Integer Equivalent: 32");break;

    7.
    .     float basicSalary,monthlySales,bonus = 0.0;
    int yearsOfService;
    char city;
    float additionalAllowance = 0.0;
    float bonusPercentage = 0.0;
    float grossRemuneration = 0.0;

    printf("Enter the basic salary: ");
    scanf("%f", &basicSalary);

    printf("Enter the number of years of service: ");
    scanf("%d", &yearsOfService);

    printf("Enter the city ('C' for Colombo, 'O' for other cities): ");
    scanf(" %c", &city);

    printf("Enter the monthly sales: ");
    scanf("%f", &monthlySales);
     if (yearsOfService > 5) {
        additionalAllowance = 0.1 * basicSalary;
    }
    if (city == 'C') {
        additionalAllowance += 2500;
    }
    if (monthlySales >50000)
        bonusPercentage = 15;
     else if (monthlySales > 25000)
        bonusPercentage = 12;
     else if (monthlySales > 50000)
        bonusPercentage = 10;
    bonus = bonusPercentage / 100 * monthlySales;
    grossRemuneration = basicSalary + additionalAllowance + bonus;

    printf("Gross Monthly Remuneration: %.2f\n", grossRemuneration);
}


