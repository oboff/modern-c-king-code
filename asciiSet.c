#include <stdio.h>
#include <limits.h>

int main()
{
    signed char ch;
    
    for (int cmin = CHAR_MIN, cmax = CHAR_MAX; cmin < cmax; cmin++)
        printf("%d: %c\n", cmin, cmin);
}
