#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1,n2;
    printf("enter two numbers\n");
    scanf("%d %d",&n1,&n2);
    if (n1%n2==0)
        {
         printf("%d is multiplication of %d",n1,n2);
        }
    else
         {
          printf("first number is not a multiple of second number");
         }
   return 0;
}
