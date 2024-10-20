#include <stdio.h>
#include <string.h>

#define MAX_LEN 1000

int main() {
    char text[MAX_LEN];   
    char target[MAX_LEN];  
    char *found;          

    printf("Enter the text: ");
    fgets(text, sizeof(text), stdin);

    printf("Enter the search value (target): ");
    fgets(target, sizeof(target), stdin);

    found = strstr(text, target);

    if (found != NULL) {
        printf("%ld\n", found - text);
    } else {
        printf("Search value is not found in the text.\n");
    }

    return 0;
}
