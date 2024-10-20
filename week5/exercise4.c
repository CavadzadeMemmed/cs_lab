#include <stdio.h>

int main() {
    char str[1000];  
    char newStr[1000];
    int i = 0, j = 0;  
    int spaceFlag = 0; 

    printf("Enter the text: ");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0' && str[i] != '\n') {
        if (str[i] != ' ') {
            newStr[j++] = str[i]; 
            spaceFlag = 0; 
        } else if (spaceFlag == 0) {
            newStr[j++] = ' ';  
            spaceFlag = 1; 
        }

        i++;
    }

    printf("Normalized text: %s\n", newStr);

    return 0;
}
