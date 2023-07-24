#include <stdio.h>
#include <stdlib.h>

float findquotient(int a, int b)
 {
     return (float) a/b;

 }

int main()
{
    int a,b;
    printf("enter 2 numbers:");
    scanf("%d %d",&a,&b);
    printf("\n qutient=%.2f",findquotient(a,b));
    return 0;
}
