#include <stdio.h>
#include <stdlib.h>

int main()
{
    #include <stdio.h>
#include <stdlib.h>

int main()
{
    1.
    printf("my name is Minoli\n");
    printf("my school was Ave Maria Convent,Negombo\n");

    2.
    printf("*\n""**\n""***\n""****\n*****\n");

    3.
    int n1;
    char chr;
    float flt;
    double duble;
    printf("enter number value\n");
    scanf("%d",&n1);
    printf("enter a letter\n");
    scanf("%c",&chr);
    printf("enter number with decimal\n");
    scanf("%lf",&flt);
    printf("enter another number with decimal\n");
    scanf("%f",&duble);
    printf("integer value is %d\n",n1);
    printf("char value is %c\n",chr);
    printf("float value is %f\n",flt);
    printf("double value is %f\n",duble);


    4.
    int n1,n2,tot;
    printf("enter to different numbers");
    scanf("%d %d",&n1,&n2);
    tot=n1+n2;
    printf("total is %d",tot);

    5.
    float n1,n2,tot,avg;
    printf(" enter two different decimal numbers\n");
    scanf("%f %f",&n1,&n2);
    tot=n1+n2;
    avg=tot/2;
    printf("average of your numbers are %.2f",avg);

    6.
    int birthy,age;
    char sname[15];
    printf("enter your name\n");
    scanf("%s",&sname);
    printf("enter your birth year\n");
    scanf("%d",&birthy);
    age=2023-birthy;
    printf("hi %s\n your age is %d",sname,age);

    7.
    int n1,n2,swp;
    printf("enter to numbers\n");
    scanf("%d %d",&n1,&n2);
    printf("your values are a=%d b=%d\n",n1,n2);
    swp=n1;
    n1=n2;
    n2=swp;
    printf("after swap a=%d b=%d\n",n1,n2);

     printf("The color: %s\n", "blue");
	printf("First number: %d\n", 12345);
	printf("Second number: %04d\n", 25);
	printf("Third number: %i\n", 1234);
	printf("Float number: %3.2f\n", 3.14159);
	printf("Hexadecimal: %x\n", 255);
	printf("Octal: %o\n", 255);
	printf("Unsigned value: %u\n", 150);
	printf("Just print the percentage sign %%\n",10);
}

output

The color: blue
First number: 12345
Second number: 0025
Third number: 1234
Float number: 3.14
Hexadecimal: ff
Octal: 377
Unsigned value: 150
Just print the percentage sign %


