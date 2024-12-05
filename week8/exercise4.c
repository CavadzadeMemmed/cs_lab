#include <stdio.h>
#include <stdbool.h>

bool isPalindrome(char *str) {
    char *start = str;  
    char *end = str;    

    while (*end != '\0') {
        end++;
    }
    end--; 

    while (start < end) {
        if (*start != *end) {
            return false; 
        }
        start++;
        end--;
    }

    return true; 
}

int main() {
    char str1[] = "radar";
    char str2[] = "hello";

    if (isPalindrome(str1)) {
        printf("\"%s\" is a palindrome.\n", str1);
    } else {
        printf("\"%s\" is not a palindrome.\n", str1);
    }

    if (isPalindrome(str2)) {
        printf("\"%s\" is a palindrome.\n", str2);
    } else {
        printf("\"%s\" is not a palindrome.\n", str2);
    }

    return 0;
}
