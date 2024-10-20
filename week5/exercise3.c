#include <stdio.h>

int main() {
    char str[1000];  
    char newStr[1000]; 
    int i = 0, j = 0;  

    printf("Enter the text: ");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0' && str[i] != '\n') {
        if (str[i] == '#') {
            newStr[j] = '_'; 
        } else {
            newStr[j] = str[i];  
        }
        i++;
        j++;
    }

    printf("Output: %s\n", newStr);

    return 0;
}
