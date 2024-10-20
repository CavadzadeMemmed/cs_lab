#include <stdio.h>

int main() {
    char str[1000];  
    int tokenCount = 1;  

    printf("Enter the text: ");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == '#') {
            tokenCount++;
        }
    }

    printf("Number of tokens: %d\n", tokenCount);

    return 0;
}
