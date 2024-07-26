#include <stdio.h>

void sum(int a, int b){
    printf("%d", a+b);
}

void display( void (*fptr)(int, int) )
{
    fptr(5,45);
}

int main(){
    display( &sum );
}