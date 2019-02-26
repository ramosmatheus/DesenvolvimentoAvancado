#include <stdio.h>

double div(int a, int b)
{

  return (double)a / (double)b;
}

double convertToFahrenheit(double a){

  return (((double)a*9)/5) + 32;
}


int main()
{
  int a;
  int *pA;

  pA = &a;

  printf("Quantos º: ");
  scanf("%d", pA );

  printf("%.3f\n", convertToFahrenheit(a) );

  printf("a/b = %.3f\n", div(5,2));
  return 0;
}
