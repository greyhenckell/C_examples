#include <stdio.h>

void fibo(int,int);

int c=0;
void fibo(int a, int b){
     if (c >= 50)
        return;
    else
        c = a+b;
        printf("%d,",b);
        fibo(b,c);
}


int main(){
    fibo(0,1);
    return 0;
}