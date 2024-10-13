#include <stdio.h>

int main() {
    int n;

    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    int arr[n];  

    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Distinct elements and their counts:\n");
    for (int i = 0; i < n; i++) {
        int count = 1; 

        //if (arr[i] != -1) {  
            for (int j = i + 1; j < n; j++) {
                if (arr[i] == arr[j]) {
                    count++;  
                    arr[j] = -1;  
                }
            //}

            printf("%d %d\n", arr[i], count);
        }
    }

    return 0;
}
