#include <stdio.h>

//prototype
int sum(int,int);

int main(){
    int result = 0;
    int (*pr)(int,int) = sum;
    result = pr(10,20);
    printf("total: %d\n",result);
    return 0;
}

int sum(int a, int b){
    return a+b;
}