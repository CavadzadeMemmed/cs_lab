#include <stdio.h>

int stringLength(char *str) {
    int length = 0;

    while (*str != '\0') {
        length++; 
        str++;    
    }

    return length;  
}

int main() {
    char str1[] = "Hello, world!";

    printf("The length of \"%s\" is: %d\n", str1, stringLength(str1));

    return 0;
}
