#include <stdio.h>
#include <stdlib.h>

int main()
{
   for (int i,j = 0; i < 10; i++, j = j+2)
   {
       printf("%d\t%d\n", i, j); 
       //j = j + 2;
   }
    return 0;
}
