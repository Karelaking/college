#include <stdio.h>
#include <math.h>


int getNumber(){
  printf("Enter the number: ");
  int number = 0;
  scanf("%d", &number);
  return number;
}

void binary_to_decimal(){
  int number = getNumber();
  int tem = 0, sum = 0, rem = 0, power = 0;
  tem = number;

  while (tem != 0){
    rem = tem % 10;
    tem /= 10;
    sum += rem * pow(2, power);
    power += 1;
  }
  printf("Decimal value of %d is %d", number, sum);
}

void decimal_to_binary(){
  int number = getNumber();
  int tem = 0, sum = 0, rem = 0;

  tem = number;

  while (tem != 0){
    rem = tem % 2;
    tem /= 2;
    sum = sum * 10 + rem;
  }
  printf("Binary value of %d is %d", number, sum);
}


void main(){
  int opt = 0;

  printf("Select the options from the below:- \n");
  printf("1. Convert binary number into decimal number \n");
  printf("2. Convert decimal number into binary number \n");

  scanf("%d", &opt);

  switch(opt){
    case 1:
    binary_to_decimal();
    break;
    case 2:
    decimal_to_binary();
    break;
    default:
    printf("Invalid options");
  }
}
