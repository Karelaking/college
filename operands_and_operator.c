#include <stdio.h>

// Function to perform operation
void operation(float number1, float number2, char operand){
  switch (operand){
    case 1:
        printf("%f + %f = %f", number1, number2, number1 + number2);
        break;
    case 2:
        printf("%f - %f = %f", number1, number2, number1 - number2);
        break;
    case 3:
        printf("%f x %f = %f", number1, number2, number1 * number2);
        break;
    case 4:
        printf("%f / %f = %f", number1, number2, number1 / number2);
        break;
    default:
        printf("Invalid option \n");
        break;
  }
}

void main(){
  int operand;
  float operator1, operator2;

  printf("Enter the first number: ");
  scanf("%f", &operator1);
  printf("Enter the second number: ");
  scanf("%f", &operator2);

  printf("Select operand - \n\n\n");
  printf("1. addition ( + ) \n");
  printf("2. subtraction ( - ) \n");
  printf("3. multiplication ( * ) \n");
  printf("4. division ( / ) \n\n");

  scanf("%d", &operand);

  operation(operator1, operator2, operand);
}
