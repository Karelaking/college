#include <stdio.h>


void main(){
  int number;

  printf("Enter the number: ");
  scanf("%d", &number);

  if (number % 2 == 0){
    printf("%d is the even number", number);
  }
  else{
    printf("%d is the odd number", number);
  }
}
