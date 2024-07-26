#include <stdio.h>
#include <stdint.h>

#define SIG_BIT 128

//prototype
int test_utf8(uint32_t codepoint, char *str);

//definition
int test_utf8(uint32_t n, char *str){
    if(n>1114112|| (n >= 0xd800 && n <= 0xdfff ) ){
        str[0] = 0xef;
		str[1] = 0xbf;
		str[2] = 0xbd;
		str[3] = 0;
		return 3;

    }

    //7 bits
    if(n < 128){
		str[0] = n;
		str[1] = '\0';
		return 1;
	}

    uint32_t len = 0;
	if(n < 2048){
		len = 2;
	}else{
		if( n < 65636){
			len = 3;
		}else{
			len = 4;
		}
	}
	str[len] = '\0';

    //s
    unsigned char m = SIG_BIT;
    uint32_t i = 0;
    str[0] = 0;
    while(i < len){
        str[0] |= m;
        i += 1;
        m >>= 1;
    }

    //set the most significant bits in the other bytes
	i = 1;
	while(i < len){
		str[i] = SIG_BIT;
		i += 1;
	}

    //fill in the codepoint
	int j = len - 1;
	while(j >= 0){
		m = 1;
		i = 0;
		while(n && i < 6){
			if(n%2){
				str[j] |= m;
			}
			n >>= 1;
			m <<= 1;
			i += 1;
		}
		j -= 1;
	}

	return len;


}

int main() {
    //display the string

    uint32_t cp = 0x1f300;
    char str_utf8[20];

    //initialize output fn
    int n = 0;

    int i = 0;
    while(i<1000) {
        n = test_utf8(cp, str_utf8);
        printf("%5s ", str_utf8);
        //n is 4
        i += 1;
        cp += 1;
    }

    putchar('\n');
    
}