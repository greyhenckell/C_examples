#include <stdio.h>

int main(){
    int guess;
    printf("type a number:");
    while(scanf("%d",&guess) != EOF ){        
        if (guess == 42){
            printf("nice work!\n");
            break;
        }
        else if (guess <42)
            printf("too low, try again\n");
        else
            printf("too high- try again\n");
    }
}