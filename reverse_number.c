#include <stdio.h>

void main(){

  int num, tem, rem, rev_num = 0;

  printf("Enter your number: ");
  scanf("%d", &num);

  tem = num;

  while( tem != 0){
    rev_num *= 10;
    rem = tem % 10;
    tem /= 10;
    rev_num += rem;
  }

  printf("%d <=> %d", num, rev_num);
}


/*
453
354
rev = 3
rev*10 + 5 = 35
rev*10 + 4 = 354
*/
