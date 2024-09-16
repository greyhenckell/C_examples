#include <stdio.h>

int py_len(self)
    char self[];
{
    int i;
    for(i=0; self[i]; i++);
    return i;
}


int main(){
    char x[] = "Hello";
    printf("%s %d\n",x,py_len(x));
    return 0;
}