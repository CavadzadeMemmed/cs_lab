#include <stdio.h>

int findMax(int *arr, int size){
    int max = *arr;

    for(int i=1; i<size; i++){
        if(max < *(arr + i))
            max = *(arr + i);
    }

    return max;
}

int main(){
    int n, max;
    int arr[]={1, 2, 3, 4};

    n=sizeof(arr)/sizeof(*arr);

    max = findMax(arr, n);

    printf("Max is: %d", max);
}
