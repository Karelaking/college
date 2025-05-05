#include <stdio.h>

int main(){
  float temp;

  printf("Enter the temperature in centigrade:- ");
  scanf("%f", &temp);

  float ftemp = 1.8*temp + 32;

  printf("temperature = %f fahrenheit", ftemp);
  return 0;
}
