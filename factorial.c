#include <stdio.h>

int factorial(int number){
  int result = 1;
  for (int i = number; i == 1; i--){
    result = result * i;
  }
}

void main(){
  int fac = factorial(5);
  printf("%d", fac);
}

// 5*4*3*2*1 = 120
