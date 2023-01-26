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
int f2 ( int x, int y )
{ int z;
z = x * x - y * y;
return z;
}
int main ( )
{ int x;
tiny_readint(&x, "A41.input");
int y;
tiny_readint(&y, "A42.input");
int z;
z = f2 (x, y)  + f2 (y, x) ;
tiny_writeint(z, "A4.output");
}
