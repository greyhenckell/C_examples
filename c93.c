/*Gate 2000 question*/

#include <stdio.h>

int ft_incr(int i)
{
    static int counter = 0;
    counter += i;
    return counter;
}

int main()
{
    int i;
    int j;

    while (i <= 4)
    {
        j = ft_incr(i);
        i++;
    }

    printf("%d\n", j); // 10
}