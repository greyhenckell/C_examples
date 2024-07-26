#include <stdio.h>
#include <stdint.h>

//prototype
char* modifyString(char [], char[]);

int main(){
    char *mystr;
    char frist_name[] = "franck";
    char last_name[] = "sanchez";
    mystr = modifyString(frist_name, last_name);
    mystr[0] = 'P';
    printf("from main %s", mystr);
    return 0;
}

char* modifyString(char p1[], char p2[]){
    int len = 0;
    for(int i=0; p1[i] != '\0'; i++){
        len += 1;
    }
    p2[0] = 'S';
    printf("first name has size of: %d, last name= %s \n", len, p2);
    return p2;
}