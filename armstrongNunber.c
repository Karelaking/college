#include <stdio.h>

void main(){

  int number;

  printf("Enter the number: ");
  scanf("%d", &number);

  int armstrong_numbers[];

  for (int i = 1; int <= number; i++){
    int tem, sum, rem;
    tem = i;
    while (tem != 0){
      rem = tem % 10;
      sum += rem * rem * rem;
      tem /= 10;

      if (sum == i){
        armstrong_numbers.insur(sum);
      }
    }
  }

}
