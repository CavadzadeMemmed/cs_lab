#include <stdio.h>
#include <string.h>

#define MAX_LEN 1000

int main() {
    char str[MAX_LEN];     
    char reversed[MAX_LEN]; 
    int length, i, j;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    //str[strcspn(str, "\n")] = '\0';

    length = strlen(str);
    j = 0;

    for (i = length - 1; i >= 0; i--) {
        reversed[j++] = str[i];
    }

    printf("Reversed string: %s\n", reversed);

    return 0;
}
