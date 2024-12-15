#include<stdio.h>

void shiftLeft(short int *arr, int size){
    int temp=*(arr);
    
    for(int i=0; i<size; i++){
        *(arr + i)=*(arr + i + 1);
    }

    *(arr + size - 1) = temp;

}

int main(){
    int n;
    short int arr[]={1, 2, 3, 4, 5};
    n=sizeof(arr)/sizeof(*arr);
    shiftLeft(arr,n);
    for(int i=0; i<n; i++){
        printf("%d", *(arr+i));
    }
}
