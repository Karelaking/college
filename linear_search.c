#include <stdio.h>

void main(){
  int arr[5];

  printf("Enter 5 numbers: \n");
  for (int i = 0; i <= 5; i++){
    scanf("%d", &arr[i]);
  }

  int search, index = 0;

  printf("Enter the number to search: ");
  scanf("%d", &search);

  for (int i = 0; i <= 5; i++){
    if (arr[i] == search){
      index = i;
      break;
    }
  }

}
