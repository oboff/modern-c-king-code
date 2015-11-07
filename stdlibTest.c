#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(void)
{
    char *p = "1776pw";
    bool t = (atoi(p) == 1776);
//    int p1 = atoi(p);

    printf("%d\n", atoi(p));
    printf("%s == 1776: %d\n", p, t);
}
