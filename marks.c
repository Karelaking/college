#include "stdio.h"

void main(){
  int maths, english, science, history, geography;
  float sum , avrage;

  printf("Enter marks of maths:- ");
  scanf("%d", &maths);

  printf("Enter marks of english:- ");
  scanf("%d", &english);

  printf("Enter marks of science:- ");
  scanf("%d", &science);

  printf("Enter marks of history:- ");
  scanf("%d", &history);

  printf("Enter marks of geography:- ");
  scanf("%d", &geography);

  sum = maths + english + science + history + geography;
  avrage = sum/5;

  printf("Average marks = %f \n", avrage);
  printf("Sum of marks = %f", sum);
}
