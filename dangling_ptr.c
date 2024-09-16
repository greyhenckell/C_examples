#include <stdio.h>
#include <stdlib.h>
/*
int *test_ptr(void)
{
    static int a;

    a = 10;

    return &a;
}

int main(void)
{
    int *iptr;

    iptr = test_ptr();
    printf("value: %d\n", *iptr);
}*/
int main(void)
{
    int *ptr;
    int a;
    //ptr = (int *) malloc(1* sizeof(int));
    //*ptr = 10;

    //printf("pointer value %d\n", *ptr);
    //free(ptr);
    ptr = NULL;
    a = 5;
    ptr = &a;
    printf("pointer value %d\n", *ptr);
}