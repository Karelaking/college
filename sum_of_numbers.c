#include <stdio.h>

// Function to add the all number
void printSum(int number){
  int sum = 0;
  for (int i = 1; i <= number; i++){
    sum += i;
  }

  printf("Sum of numbers is: %d", sum);
}

void main(){

  int number;

  printf("Enter the number: ");
  scanf("%d", &number);

  printSum(number);

}
