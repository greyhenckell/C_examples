/*GATE 2016 QUESTION*/

#include <stdio.h>

void f(int *p, int m)
{
    m += 5;
    *p = *p + m;
    return;
}

int main()
{
    int i;
    int j;

    i = 5;
    j = 10;

    f(&i, j);
    printf("%d\n", i + j); // 20 + 10 = 30
}