#include <stdio.h>
#include <string.h>

#define MAX_LEN 1000

int main() {
    char text[MAX_LEN];   
    char target;          
    int index = -1;        

    printf("Enter the text: ");
    fgets(text, sizeof(text), stdin);

    printf("Enter the search value (target): ");
    scanf(" %c", &target); 

    for (int i = 0; i < strlen(text); i++) {
        if (text[i] == target) {
            index = i; 
            break;     
        }
    }

    if (index != -1) {
        printf("%d\n", index); 
    } else {
        printf("Search value is not found in the text.\n");
    }

    return 0;
}
