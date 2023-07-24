#include <stdio.h>
#include <stdlib.h>

void sumanddifference(int a,int b)
{
    printf("\n sum=%d",a+b);
    printf("\n difference = %d",a-b);
}
int main()
{
    int a,b;
    printf("enter two numbers:");
    scanf("%d %d",&a,&b);
    sumanddifference(a,b);
    return 0;
}

