#include <stdio.h>

int vv= 10;

int main()
{

  printf("&vv=%p  vv=%i\n",&vv , vv);
  getchar();
  printf("&vv=%p  vv=%i\n",&vv , vv);
  return 0;
}
