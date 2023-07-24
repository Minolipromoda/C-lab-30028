#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    1.
    int no,mod;
    printf("enter your number\n");
    scanf("%d",&no);
    mod=no%2;
    if (mod=1)
    printf("%d is an odd number",no);
    else
    printf("%d is an even number",no);
    return 0;


b-   int no,mod;
    printf("enter your number\n");
    scanf("%d",&no);
    mod=no%2;
    switch(mod)
    {
     case 1:printf("%d is an odd number",no);break;
     case 0:printf("%d is an even number",no);break;
    }

   2.
    int n1,n2,choise;
   printf("menu\n");
   printf("1 addition\n");
   printf("2 subtraction\n");
   printf("3 multiplication\n");
   printf("4 division\n");
   printf("enter your choose calculation to do\n");
   scanf("%d",&choise);
   printf("enter 2 numbers");
   scanf("%d %d",&n1,&n2);
    switch(choise)
    {
        case 1:printf("result:%d",n1+n2);break;
   case 2:printf("result:%d",n1-n2);break;
   case 3:printf("result:%d",n1*n2);break;
   case 4:printf("result:%.2f",(float)n1/n2);break;
    }

    3.
      int choice;
      float radius;
      printf("MENU \n");
      printf("1.Calculate the circumference of the circle \n");
      printf("2.Calculate the area of the circle \n");
      printf("3.Calculate the volume of the ciecle \n\n");
      printf("Enter your choice ");
      scanf("%d",&choice);
      printf("Enter the radius ");
      scanf("%f",&radius);
      switch (choice)
      {
         case 1:printf("Circumference- %.2f\n",2*M_PI*radius);break;
         case 2:printf("Area of the circle- %.2f\n",M_PI*radius*radius);break;
         case 3:printf("Volume of the sphere- %.2f\n",(4/3)*M_PI*radius*radius*radius);break;
         default:printf("invalid choice")
       }

    4.
      char ch;
      printf("Enter a letter \n");
      scanf("%c",&ch);

      switch(ch)
   {
      case'a':printf("a is a vowel");break;
      case'b':printf("e is a vowel");break;
      case'i':printf("i is a vowel");break;
      case'o':printf("o is a vowel");break;
      case'u':printf("u is a vowel");break;
      default:printf("%c is not a vowel",ch);break;
   }

    5.
      int n;
      printf("Enter a month number \n");
      scanf("%d",&n);

      switch(n)
       {
      case'1':
      case'3':
      case'5':
      case'7':
      case'8':
             case'10':
      case'12':printf(“this month has 31 days”);break;
      case'4':
      case'6':
      case'9':
      case'11':printf(“this month has 30 days”);break;
      default:printf("February got 28 days”);break;
   }
}


