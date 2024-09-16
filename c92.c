/*GATE 2019 QUESTION*/

#include <stdio.h>

int jumble(int x, int y)
{
    x = 2 * x + y;
    return x;
}

int main()
{
    int x = 2;
    int y = 5;

    y = jumble(y, x); // y = 12 ;
    x = jumble(y, x); // x = 26;
    printf("%d\n", x);

    return (0);
}