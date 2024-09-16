#include <unistd.h>

/*displays all different combination of two two digits numbers
(XX XX) between 00 and 99,
00 01, 00 02, 00 03, 00 04, 00 05, ..., 00 99, 01 02, ..., 97 99, 98 99$
*/



void comb(char mill, char cent, char dec, char uni)
{
  
    while(dec<='9')
    {        
        while(uni<='9')
        {
            write(1, &mill, 1);
            write(1, &cent, 1);
            write(1, " ", 1);
            write(1, &dec, 1);
            write(1, &uni, 1);
            write(1, ", ", 2);
            uni++;
        }
        uni = cent;
        dec++;
    }    
}

int main()
{
    char s1 = '0';
    char s2 = '0';

    char t1= '0';

    while(s1<='9')
    {
        while(s2 < '9')
        {
            comb(s1,s2,t1,s2+1);
            s2++;
        }
        s2 = '1';
        s1++;
    }

    
}