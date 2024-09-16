#include <stdio.h>

int reverse(self)
    char self[];
    char rev[];
{
    
    int i;
    int len = sizeof(self)/sizeof(self[0]);
    for(i=len-2; i>-1; i--){
        printf("%d: %c\n", i,self[i]);
        rev += self[i];
    }
    return 0;
}

int main(){
    char x[] = "a-hold";
    reverse(x);
}