#include <stdio.h>

int fact(int);
//fact is factorail number: 3! = 3*2*1

int fact(int n){
    if(n==1)
        return 1;
    else        
        return n * fact(n-1);
}

int main(){
    int factNumber;
    printf("Factorial of (type a number): ");
    scanf("%d", &factNumber);
    int result = fact(factNumber);
    printf(" (%d)! = %d\n",factNumber, result);
    return 0;
}


    
