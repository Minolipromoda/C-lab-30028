#include <stdio.h>
#include <stdlib.h>

int main()
{

   int i,a[3][3]={3,2,4,1,4,6,4,3,2},b[3][3]={2,6,3,4,3,2,5,1,7},d[3][3],r,c;

   for(r=0;r<3;r++)
    {
      for(c=0;c<3;c++)
      {
      printf("%d",a[r][c]);
      }printf("\n");
    }


   for(r=0;r<3;r++)
   {printf("\t");
      for(c=0;c<3;c++)
      {
          printf("%d",b[r][c]);
      }
      printf("\n");
   }
     printf("\t");
    for(r=0;r<3;r++)
    {
        for(c=0;c<3;c++)
        {
           d[r][c]=a[r][c]+b[r][c];
    }
    printf("\n");
    }

    for(r=0;r<=2;r++){
            printf("\t");
    for(c=0;c<=2;c++){
         printf("%d",d[r][c]);}
            printf("\n");
   }

}
