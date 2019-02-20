#include <stdio.h>

int v[100];

int main ()
{
  int *p;

  char nome[10];

  nome[0] = 'M';
  nome[1] = 'A';
  nome[2] = 'T';
  nome[2] = 'H';
  nome[2] = 'E';
  nome[2] = 'U';
  nome[2] = 'S';
  nome[3] = 0;

  v[0] = 22;
  *v = 22;

  v[50] = 60;
  *(v+50) = 60; //aritmetica com ponteiros

  p = v;
  p = p +1;

  printf("%lu %lu\n", v , v+1 ,&p , p , *p);

  return 0;
}
