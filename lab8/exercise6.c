#include<stdio.h>

char strCat(char *str1, char *str2){
    while(*str1!='\0'){
        *str1++;
    }

    while(*str2!='\0'){
        *str1++=*str2++;
    }
    
    *str1='\0';

    return *str1;
}

int main() {
    char str1[]="Hello, ";
    char str2[]="World!";

    strCat(str1, str2);
    printf("%s", str1);
}
