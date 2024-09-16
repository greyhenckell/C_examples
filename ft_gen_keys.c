#include <stdio.h>

int str_len(char *str)
{
    int i=0;
    while (str[i] != '\0')
    {
        i++;
    }
    return (i);
}

void iter_sets(int size, int sets, int mod)
{
    int numzeros = size-mod;

    if (mod)
    {
        //call dictionary
        //power && call dictionary
    }
    size = numzeros;
    iter_sets(size, )
   
}

void gen_keys(char *str)
{
    //423 113; 6/3 = 2 + 0 = 10² . 10² .10⁻1
    //  1 000
    //12 332 412 ; 8/3 = 2 + 2 =  10² 10² 10. 10
    //2 312 332 412; size(10)/3 = 3 + 1 =  10^(3+1+1)
    //B   M    K   h
    //1 000 000 000 ;  10/3 = 3+1 -> 10² 10² 10² . 10
    //312 332 412 ; 9/3 = 3 +0 -> 10² 10² 10²
    //  1 000 000
    int s;
    s = str_len(str);
    //str = str+s;
    //printf("%c\n",*(str-1));
    int sets = s /3 ;
    int mod = s % 3 ;
    int numzeros = s - mod; 
    iter_sets(s, sets, mod);

}

int main(int argc, char **argv)
{
    if (argc < 2)
        return (-1);
    //logic gen keys
    gen_keys(argv[1]);
}