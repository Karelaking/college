#include <stdio.h>

void main(){
  int  var1, var2, swap_var;

  printf("Enter the first number: ");
  scanf("%d", &var1);
  printf("Enter the second number: ");
  scanf("%d", &var2);

  swap_var = var1;
  var1 = var2;
  var2 = swap_var;

  printf("After swapping, the first number is: %d\n", var1);
  printf("After swapping, the second number is: %d\n", var2);
}
