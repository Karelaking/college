#include "stdio.h"

void odd_even_sum(int number){

  int even_sum, odd_sum = 0;
  for (int i = 1; i <= number; i++){
    if (i % 2 == 0){
      even_sum += i;
    }
    else{
      odd_sum += i;
    }
  }

  printf("sum of all odd number from 1 to %d is - %d \n", number, odd_sum);
  printf("sum of all even number from 1 to %d is - %d \n", number, even_sum);
}


void main(){
  int number;

  printf("Enter the number: ");
  scanf("%d", &number);
  odd_even_sum(number);

}
