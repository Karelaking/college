#include <stdio.h>

// Function to calculate the factorial of the given number
int factorial(int number){
  int result = 1;
  for (int i = number; i >= 1; i--){
    result = result * i;
  }
  return result;
}

void main(){
  int number;

  printf("Enter the number: ");
  scanf("%d", &number);

  int factorial = factorial(number);

  printf(

    
  )
}

// 5*4*3*2*1 = 120
