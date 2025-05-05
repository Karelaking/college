#include <stdio.h>

void main(){
  int number1, number2;

  printf("Enter the first number: ");
  scanf("%d", &number1);
  printf("Enter the second number: ");
  scanf("%d", &number2);

  if(number1 == number2){
    printf("number %d and %d are equal.\n", number1, number2);
  }
  else{
    printf("numbers %d and %d are not equal.\n", number1, number2);
  }
}
