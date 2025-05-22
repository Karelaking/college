#include <stdio.h>

void bubble_sort(int *arr, int n){
    int i, j, temp;
    for(i = 0; i < n; i++){
        for(j = 0; j < n - i - 1; j++){
            if(arr[j] > arr[j + 1]){
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void main(){
    int arr[10] = {4,2,7,5,9,6,4,3,1,0};
    bubble_sort(arr, 10);
    for(int i = 0; i < 10; i++){
        printf("%d ", arr[i]);
    }
}
