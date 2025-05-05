#include <stdio.h>
#include <math.h>

float pi = 3.14;

// Function to calculate circumference of a circle
 void circumference(float radius){
     float result = 2 * pi * radius;
     printf("Circumference: %f\n", result);
 }

 // Function to calculate area of a circle
 void area(float radius){
  float result = pi * pow(radius, 2);
  printf("Area: %f\n", result);
 }

// main entry point of the program
void main(){
  int option;
  float radius;

  printf("1. Circumference of the circle\n");
  printf("2. Area of the circle\n\n");

  printf("Enter your option from the above options: ");
  scanf("%d", &option);

  printf("Enter the radius of circle: ");
  scanf("%f", &radius);

  switch(option){
    case 1:
        circumference(radius);
        break;
    case 2:
        area(radius);
        break;
    default:
        printf("Invalid option\n");
        break;
  }
}
