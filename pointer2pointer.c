#include <stdio.h>

void poiterlevel(int ****p){
    ****p = 42;
    printf("%d", ****p);
}

int main(){
    int var = 20;
    int *p1 = &var;
    int **p2 = &p1;
    int ***p3 = &p2;
    int ****p4 = &p3;

    poiterlevel(p4);
}