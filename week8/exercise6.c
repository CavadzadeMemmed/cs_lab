#include <stdio.h>

void concatenateStrings(char *str1, char *str2) {
    while (*str1 != '\0') {
        str1++;
    }

    while (*str2 != '\0') {
        *str1 = *str2;
        str1++;
        str2++;
    }

    *str1 = '\0';
}

int main() {
    char str1[100] = "Hello, "; 
    char str2[] = "world!";

    concatenateStrings(str1, str2);

    printf("\nAfter concatenation:\n");
    printf("String 1: \"%s\"\n", str1);

    return 0;
}
