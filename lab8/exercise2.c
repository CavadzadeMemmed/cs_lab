#include<stdio.h>

void printReversed(int *arr, int length){
    for(int i=0; i<length/2; i++){
        int j = length - 1 - i;
        int temp = *(arr + j);
        *(arr + j) = *(arr + i);
        *(arr + i) = temp;
    }
}

int main(){
    int n;
    int arr[]={1, 2, 3, 4};

    n=sizeof(arr)/sizeof(*arr);

    printReversed(arr, n); 
    
    for(int i=0; i<n; i++){
        printf("%d", *(arr + i));
    }
}
