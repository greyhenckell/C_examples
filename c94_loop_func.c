/*GATE QUESTION*/

#include <stdio.h>

int r()
{
    static int num = 7;
    return num--;
}

int main()
{
    for (r(); r(); r())      // 6 , 3 and 0
        printf("%d\n", r()); // 5 and 2

    return 0;
}