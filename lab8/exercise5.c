#include<stdio.h>

int lengthArray(char *arr){
    int len=0;

    while(*arr!='\0'){
        *arr++;
        len++;
    }

    return len;
}

int main(){
    int length;
    char arr[]="Hello, World!";

    length = lengthArray(arr);
    
    printf("%d", length);

}