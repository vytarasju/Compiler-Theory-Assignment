#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void tiny_readint ( int *x, char *s ) {
  printf("%s ", s);
  scanf("%d", x);
}
void tiny_writeint ( int x, char *s ) {
  printf("%s ", s);
  printf("%d\n", x);
}
int fac ( int x )
{ int z;
if ( x == 1 ) z = 1;
  else
z = x * fac (x - 1) ;
return z;
}
int main ( )
{ int x;
tiny_readint(&x, "Input an integer value for x:");
int z;
z = fac (x) ;
tiny_writeint(z, "fac(x) =");
}
