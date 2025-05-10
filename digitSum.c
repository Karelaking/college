#include <stdio.h>

void main(){
  int number, tem, rem, sum = 0;

  printf("Enter a number: ");
  scanf("%d", &number);

  tem = number;

  while(tem != 0){
    rem = tem % 10;
    tem /= 10;
    sum += rem;
  }

  printf("%d", sum);
}

/*
24 % 10 = 4
24/10 = 2.4
2.4 % 10 ~= 2
2.4/10 ~= 0
sum = 4+2 => sum = 6
*/
