#include <stdio.h>

void reverse(int *tab, int size)
{
    tab = tab + size-1;
    while(*tab){
        printf("%d, ", *tab);
        tab--;
    }
}

int main(){
    int nums[] = {0,1,2,3,4,5,6};
    reverse(nums, 7);
}