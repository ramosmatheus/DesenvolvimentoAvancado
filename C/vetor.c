#include <stdio.h>

int v[100];

int main ()
{

  v[0] = 22;
  *v = 22;

  v[50] = 60;
  *(v+50) = 60; //aritmetica com ponteiros

  return 0;
}
