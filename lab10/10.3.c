#include <stdio.h>
#include <stdlib.h>

int findproduct(int a,int b)
{
    return a*b;
}
int main()
{
    int a,b;
    printf("enter two numbers:");
    scanf("%d %d",&a,&b);
    printf("\n product=%d",findproduct(a,b));
    return 0;
}

