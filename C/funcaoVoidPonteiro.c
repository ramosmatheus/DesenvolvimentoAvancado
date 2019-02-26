#include <stdio.h>

void celcius2Fahrenheit(double *a){

  *a = ((*a*9)/5) + 32;
}


int main()
{
  double a;

  printf("Quantos º: ");
  scanf("%lf", &a );

  celcius2Fahrenheit(&a);
  printf("%.3lf\n", a );


  return 0;
}
