#include<stdio.h>
int findMax(int arr[], int length){
    int max = arr[0];
    if (length==0)
        return 0;
    else{
        for(int i=1;i<length;i++){
            if (max < arr[i]);
                max=arr[i];
        }
        
        return max;}

}
int main(){
    int res;
    int length;
    int arr[]={0, 1, 2, 3};
    length = sizeof(arr)/sizeof(int);
    res = findMax(arr, length);
    if (res==0)
        puts("Array is empty");
    else
        printf("%d", findMax(arr, length)); 
        
}