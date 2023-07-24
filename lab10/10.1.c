#include <stdio.h>
#include <stdlib.h>

void findsumanddifference()
{
    int a,b;
    printf("enter two numbers:");
    scanf("%d %d",&a,&b);
    printf("sum=%d\n",a+b);
    printf("differences=%d\n",a-b);
}
int main()
{
    findsumanddifference();
}

