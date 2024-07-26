#include <stdio.h>
//#define NESO "Welcome to dance!"
//#define STRING "%s\n"


//static int i = 10;
int main(){

    char a = 7;
    a ^=5; //2
    printf("%d", printf("%d",a+=3));//2+3=5 and print return number of digits printed =1
    //output: 51

    /*xor operator
    int a=4, b=3;
    a = a^b;
    b = a^b;
    a = a^b;
    printf("after xor,a= %d, b=%d\n", a,b);
    */
    /*int a=5, b=3;
    int incr;
    incr = (a<b) && (b++);
    printf("%d\n",incr);
    printf("%d",b);
    */
    /*increment*/
    //int a=4, b=3;
    //printf("%d", a+ ++b); // 8 ;   a++ +b =7

    /*scope example*/
    //static int i;
    //printf("%d",i); // 0 ->  even there is global var, the declaration belongs to main 

    /*
    printf(STRING, NESO); //ouput is without ""
    return 0;
    */

    /*
    int var1 = 052; // 0 in front makes OCTAL
    printf("%d",var1); //42
    return 0;
    */

    /*unsigned i = 1;
    int j = -4;
    printf("%u", i+j); //4294967293 : unsigned integer internal rprstn (-3 = cmpl of 3: 00..11 -> 11...00),
    printf("%d", i+j); //-3
    return 0;
    */

    //-----------------
    /*char c = 255;4294967293-3
    c = c+10;
    printf("%d",c);*/
}