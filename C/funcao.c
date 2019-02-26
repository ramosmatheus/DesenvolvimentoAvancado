#include <stdio.h>

double div(int a, int b)
{

  return (double)a / (double)b;
}

double celcius2Fahrenheit(double a){

  return ((a*9)/5) + 32;
}


int main()
{
  double a;

  printf("Quantos º: ");
  scanf("%lf", &a );

  printf("%.3lf\n", celcius2Fahrenheit(a) );

  printf("a/b = %.3f\n", div(5,2));
  return 0;
}
