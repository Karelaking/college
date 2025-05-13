#include <stdio.h>


void main(){

  int arr[5], i, max, min;

  printf("Enter 5 numbers: \n");
  for (i = 0; i < 5; i++){
    scanf("%d", &arr[i]);
  }

  max = arr[0];
  min = arr[0];
  
  for (i = 0; i < 5; i++){
    if (arr[i] > max){
      max = arr[i];
    }
    if (arr[i] < min){
      min = arr[i];
    }
  }

  printf("Maximum number is: %d\n", max);
  printf("Minimum number is: %d\n", min);
}
