#include <stdio.h>

int main()
{
  int a, b,c;
  int *p;


  p = &a;

  *p = 99;

  *(&a) = 100;

  b = 9;
  c = 69;
  
  scanf("%i", &c ); //captura o endereço de c e escreve oq o cliente digitar e guarda em c

  printf("Olá %u %i %i %p\n", *p , b, c ,&b );

  return 0;
}
// %u unitário
// %i inteiro
// %p endereço de memoria
// & captura o endereço
