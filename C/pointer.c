#include <stdio.h>

int main ()
{
  int n,o;
  int *p;

  p = &n;

  n = 20;
  o = 50;

  printf("Hello %i %i \n",*p,o);


  *p = 30;

  printf("n=%i\n", n );

  return 0;
}
