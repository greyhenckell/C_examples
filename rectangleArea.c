#include <stdio.h>

int area(int,int);

int area(int width,int large){
    return width*large;
}

int main(){
    printf("%d",area(10,15));
}