#include<stdio.h>
#include<string.h>

int polindrom(char *arr, int len){
    for(int i=0; i<len/2; i++){
        
        int j = len - 1 - i;

        if(*(arr+i)!=*(arr+j))
            return -1;
            
    }
    return 1;
}

int main(){
    int n;
    int res;
    char arr[]= "123321";
    n = strlen(arr);
    res=polindrom(arr, n);

    if (res==-1)
        puts("No");
    else if (res==1)
        puts("Yes");
}